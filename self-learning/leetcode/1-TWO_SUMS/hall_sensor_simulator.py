
import tkinter as tk
from tkinter import ttk
import math

# -----------------------------------
# 1. CREATE THE MAIN WINDOW
# -----------------------------------

window = tk.Tk()
window.title("Virtual Hall Effect Laboratory")
window.geometry("1000x760")
window.minsize(850, 680)

title = tk.Label(
    window,
    text="VIRTUAL HALL EFFECT LABORATORY",
    font=("Arial", 20, "bold")
)
title.pack(pady=10)

subtitle = tk.Label(
    window,
    text="Explore magnetic fields, Hall voltage and pedal sensors",
    font=("Arial", 11)
)
subtitle.pack(pady=2)

# Create tabs for different experiments
tabs = ttk.Notebook(window)
tabs.pack(fill="both", expand=True, padx=10, pady=10)

pedal_tab = ttk.Frame(tabs)
lab_tab = ttk.Frame(tabs)
results_tab = ttk.Frame(tabs)

tabs.add(pedal_tab, text="1. Pedal Simulator")
tabs.add(lab_tab, text="2. Hall Effect Experiment")
tabs.add(results_tab, text="3. Observations")


# -----------------------------------
# 2. PEDAL SIMULATOR
# -----------------------------------

tk.Label(
    pedal_tab,
    text="Move the slider to press the accelerator",
    font=("Arial", 12, "bold")
).pack(pady=8)

pedal_canvas = tk.Canvas(
    pedal_tab, width=650, height=290, bg="white"
)
pedal_canvas.pack(pady=5)

pedal_reading = tk.Label(
    pedal_tab, text="Pedal position: 0%",
    font=("Arial", 12)
)
pedal_reading.pack()

field_reading = tk.Label(
    pedal_tab, text="Illustrative magnetic field: -- mT",
    font=("Arial", 12)
)
field_reading.pack()

pedal_voltage = tk.Label(
    pedal_tab, text="Illustrative output voltage: -- V",
    font=("Arial", 12)
)
pedal_voltage.pack()


def update_pedal(value):
    pedal = float(value)

    # Draw the pedal moving around a pivot
    angle = math.radians(pedal * 0.35)

    pivot_x = 120
    pivot_y = 230

    magnet_x = pivot_x + 85 * math.sin(angle)
    magnet_y = pivot_y - 85 * math.cos(angle)

    end_x = pivot_x + 120 * math.sin(angle)
    end_y = pivot_y - 120 * math.cos(angle)

    pedal_canvas.delete("all")

    # Draw pedal
    pedal_canvas.create_oval(
        pivot_x - 8, pivot_y - 8,
        pivot_x + 8, pivot_y + 8,
        fill="black"
    )

    pedal_canvas.create_line(
        pivot_x, pivot_y, end_x, end_y,
        width=12, fill="gray"
    )

    pedal_canvas.create_line(
        end_x, end_y, end_x + 25, end_y + 5,
        width=10, fill="black"
    )

    # Draw magnetic field loops
    for size in [25, 40, 55]:
        points = []

        for step in range(61):
            a = 2 * math.pi * step / 60

            points.extend([
                magnet_x + size * math.cos(a),
                magnet_y + size * 0.65 * math.sin(a)
            ])

        pedal_canvas.create_line(
            *points, fill="purple", width=2, smooth=True
        )

    # Draw magnet
    pedal_canvas.create_rectangle(
        magnet_x - 15, magnet_y - 10,
        magnet_x + 15, magnet_y + 10,
        fill="red"
    )

    pedal_canvas.create_text(
        magnet_x, magnet_y,
        text="N | S", fill="white",
        font=("Arial", 9, "bold")
    )

    # Draw Hall sensor
    pedal_canvas.create_rectangle(
        350, 90, 470, 150,
        fill="lightblue", outline="blue", width=2
    )

    pedal_canvas.create_text(
        410, 120, text="HALL SENSOR",
        font=("Arial", 11, "bold")
    )

    pedal_canvas.create_line(
        magnet_x + 15, magnet_y,
        350, 120,
        fill="blue", dash=(5, 3), width=2
    )

    # Illustrative model for the pedal demo
    distance = math.sqrt(
        (350 - magnet_x) ** 2 +
        (120 - magnet_y) ** 2
    )

    # Field decreases with distance in this simplified model
    field = min(100, 30 * (100 / max(distance / 2, 1)) ** 3)

    # Pedal output is illustrative, not derived from Hall physics
    voltage = 0.5 + 4.0 * pedal / 100

    pedal_reading.config(
        text=f"Pedal position: {pedal:.0f}%"
    )

    field_reading.config(
        text=f"Illustrative magnetic field: {field:.2f} mT"
    )

    pedal_voltage.config(
        text=f"Illustrative output voltage: {voltage:.2f} V"
    )


pedal_slider = tk.Scale(
    pedal_tab, from_=0, to=100,
    orient="horizontal", length=420,
    label="Accelerator pedal position (%)",
    command=update_pedal
)
pedal_slider.pack(pady=8)


# -----------------------------------
# 3. HALL EFFECT LABORATORY
# -----------------------------------

tk.Label(
    lab_tab,
    text="Experiment: How do magnetic field and current affect Hall voltage?",
    font=("Arial", 12, "bold"),
    wraplength=850
).pack(pady=10)

controls = ttk.Frame(lab_tab)
controls.pack(pady=5)

# Fixed scientific constants for the experiment
CHARGE = 1.602e-19
CARRIER_DENSITY = 1e22  # carriers per cubic metre
THICKNESS = 0.001       # semiconductor thickness in metres

# Adjustable variables
field_var = tk.DoubleVar(value=30)
current_var = tk.DoubleVar(value=10)
distance_var = tk.DoubleVar(value=50)


def calculate_hall_voltage(field_mT, current_mA):
    # Convert millitesla to tesla
    magnetic_field = field_mT / 1000

    # Convert milliamperes to amperes
    current = current_mA / 1000

    # Hall Effect equation:
    # VH = B * I / (n * q * t)
    hall_voltage = (
        magnetic_field * current
        / (CARRIER_DENSITY * CHARGE * THICKNESS)
    )

    # Convert volts to millivolts
    return hall_voltage * 1000


def calculate_field_from_distance(distance_mm):
    # Simplified inverse-cube model for a magnet
    field = 30 * (50 / distance_mm) ** 3

    # Limit the illustrative field to 0.1-100 mT
    return max(0.1, min(100, field))


def update_field_from_distance(value):
    distance = float(value)

    field = calculate_field_from_distance(distance)
    field_var.set(round(field, 2))

    update_lab()


def update_lab(value=None):
    field = field_var.get()
    current = current_var.get()

    voltage = calculate_hall_voltage(field, current)

    field_value_label.config(
        text=f"Magnetic field: {field:.2f} mT"
    )

    current_value_label.config(
        text=f"Electric current: {current:.1f} mA"
    )

    voltage_value_label.config(
        text=f"Calculated Hall voltage: {voltage:.4f} mV"
    )

    # Show field strength using a meter
    fraction = field / 100

    meter.coords(
        meter_bar, 0, 0, 300 * fraction, 22
    )

    # Draw a simple magnet and sensor
    lab_canvas.delete("all")

    lab_canvas.create_oval(
        30, 65, 95, 130,
        fill="red", outline="darkred", width=2
    )

    lab_canvas.create_text(
        62, 97, text="N | S",
        fill="white", font=("Arial", 12, "bold")
    )

    # Show field lines
    for size in [35, 50, 65]:
        points = []

        for step in range(61):
            angle = 2 * math.pi * step / 60

            points.extend([
                62 + size * math.cos(angle),
                97 + size * 0.65 * math.sin(angle)
            ])

        lab_canvas.create_line(
            *points, fill="purple", width=2, smooth=True
        )

    # Draw the semiconductor sensor
    lab_canvas.create_rectangle(
        210, 75, 390, 120,
        fill="lightblue", outline="blue", width=2
    )

    lab_canvas.create_text(
        300, 97, text="SEMICONDUCTOR",
        font=("Arial", 10, "bold")
    )

    # Current flows through the material
    lab_canvas.create_line(
        220, 145, 380, 145,
        fill="green", width=3, arrow=tk.LAST
    )

    lab_canvas.create_text(
        300, 160, text="Electric current",
        fill="green", font=("Arial", 10)
    )

    # Hall voltage appears across the material
    lab_canvas.create_line(
        300, 72, 300, 42,
        fill="blue", width=2, arrow=tk.LAST
    )

    lab_canvas.create_line(
        300, 123, 300, 153,
        fill="blue", width=2, arrow=tk.LAST
    )

    lab_canvas.create_text(
        420, 95, text=f"VH = {voltage:.4f} mV",
        font=("Arial", 11, "bold"), fill="blue"
    )


tk.Label(
    controls, text="Magnetic field strength",
    font=("Arial", 10, "bold")
).grid(row=0, column=0, sticky="w", padx=8)

field_slider = tk.Scale(
    controls, from_=0.1, to=100,
    resolution=0.1, orient="horizontal",
    length=300, variable=field_var,
    command=update_lab
)
field_slider.grid(row=0, column=1, padx=8)

field_value_label = tk.Label(
    controls, text="Magnetic field: 30.00 mT",
    width=28, anchor="w"
)
field_value_label.grid(row=0, column=2, padx=8)

tk.Label(
    controls, text="Electric current",
    font=("Arial", 10, "bold")
).grid(row=1, column=0, sticky="w", padx=8)

current_slider = tk.Scale(
    controls, from_=1, to=20,
    resolution=0.5, orient="horizontal",
    length=300, variable=current_var,
    command=update_lab
)
current_slider.grid(row=1, column=1, padx=8)

current_value_label = tk.Label(
    controls, text="Electric current: 10.0 mA",
    width=28, anchor="w"
)
current_value_label.grid(row=1, column=2, padx=8)

# Distance experiment
tk.Label(
    lab_tab,
    text="Or move the magnet to change the field",
    font=("Arial", 10, "bold")
).pack(pady=(8, 0))

distance_slider = tk.Scale(
    lab_tab, from_=20, to=150,
    resolution=1, orient="horizontal",
    length=350,
    variable=distance_var,
    label="Magnet-to-sensor distance (mm)",
    command=update_field_from_distance
)
distance_slider.pack()

# Field strength meter
tk.Label(
    lab_tab, text="MAGNETIC FIELD METER",
    font=("Arial", 10, "bold")
).pack(pady=3)

meter = tk.Canvas(
    lab_tab, width=300, height=22,
    bg="white", highlightthickness=1
)
meter.pack()

meter_bar = meter.create_rectangle(
    0, 0, 90, 22, fill="purple", outline=""
)

lab_canvas = tk.Canvas(
    lab_tab, width=500, height=185, bg="white"
)
lab_canvas.pack(pady=5)

voltage_value_label = tk.Label(
    lab_tab,
    text="Calculated Hall voltage: -- mV",
    font=("Arial", 14, "bold"),
    fg="blue"
)
voltage_value_label.pack(pady=5)


# -----------------------------------
# 4. OBSERVATION TABLE AND GRAPH
# -----------------------------------

tk.Label(
    results_tab,
    text="Record your experimental readings",
    font=("Arial", 13, "bold")
).pack(pady=10)

table = ttk.Treeview(
    results_tab,
    columns=("field", "current", "voltage"),
    show="headings",
    height=8
)

table.heading("field", text="Magnetic Field (mT)")
table.heading("current", text="Current (mA)")
table.heading("voltage", text="Hall Voltage (mV)")

table.column("field", width=180, anchor="center")
table.column("current", width=180, anchor="center")
table.column("voltage", width=180, anchor="center")

table.pack(pady=5)


def record_observation():
    field = field_var.get()
    current = current_var.get()
    voltage = calculate_hall_voltage(field, current)

    table.insert(
        "", "end",
        values=(
            f"{field:.2f}",
            f"{current:.1f}",
            f"{voltage:.4f}"
        )
    )

    draw_graph()


def draw_graph():
    graph.delete("all")

    width = 600
    height = 260

    left = 65
    bottom = 220
    top = 25
    right = 570

    graph.create_line(
        left, top, left, bottom,
        width=2, arrow=tk.LAST
    )

    graph.create_line(
        left, bottom, right, bottom,
        width=2, arrow=tk.LAST
    )

    graph.create_text(
        300, 10,
        text="Hall Voltage vs Magnetic Field",
        font=("Arial", 11, "bold")
    )

    graph.create_text(
        300, 245, text="Magnetic field (mT)"
    )

    graph.create_text(
        18, 115, text="Hall voltage",
        angle=90
    )

    # Read observations from the table
    rows = table.get_children()
    data = []

    for row in rows:
        values = table.item(row, "values")

        field = float(values[0])
        voltage = float(values[2])

        data.append((field, voltage))

    if not data:
        graph.create_text(
            310, 120,
            text="Record readings to create the graph"
        )
        return

    max_field = max(100, max(item[0] for item in data))
    max_voltage = max(
        0.001, max(item[1] for item in data) * 1.2
    )

    previous = None

    for field, voltage in data:
        x = left + field / max_field * (right - left)
        y = bottom - voltage / max_voltage * (bottom - top)

        graph.create_oval(
            x - 4, y - 4, x + 4, y + 4,
            fill="blue", outline="blue"
        )

        if previous is not None:
            graph.create_line(
                previous[0], previous[1],
                x, y, fill="blue", width=2
            )

        previous = (x, y)


tk.Button(
    results_tab,
    text="Record Current Reading",
    command=record_observation
).pack(pady=8)

tk.Button(
    results_tab,
    text="Clear Observations",
    command=lambda: clear_observations()
).pack(pady=3)

graph = tk.Canvas(
    results_tab, width=620, height=260, bg="white"
)
graph.pack(pady=8)


def clear_observations():
    for row in table.get_children():
        table.delete(row)

    draw_graph()


# -----------------------------------
# 5. START THE LAB
# -----------------------------------

update_pedal(0)
update_lab()
draw_graph()

window.mainloop()
