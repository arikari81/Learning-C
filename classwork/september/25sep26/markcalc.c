//WAP TO CALCULATE TOTAL, PERCENTAGE, AVERAGE ETC USING FUNCTION
#include <stdio.h>

int tot = 0;
int n;
float avg = 0.00;
float perc = 0.00;
float cgpa = 0.00;

void readMarks(int data[]){
    printf("enter the number of marks you would like to enter: ");
    scanf("%d", &n);
    data[n];
    printf("Enter the marks now: \n");
    for (int i = 0; i < n; i++){
        scanf("%d", &data[i]);
        printf("\n");
    }
    printf("marks added!\n");
}

void checkTotal(int data[], int size){
    tot = 0;
    for(int i = 0; i < size; i++){
        tot += data[i];
    }
    printf("The total is %d\n", tot);
}

void checkAvg(int data[], int size){
    if (size == 0) {
        printf("No marks entered yet!\n");
        return; 
    }
    int num = 0;;
    int total = 0;
    for (int i = 0; i < size; i++){
        total += data[i];
        num += 1;
    }
    avg = (float)total / num;
    printf("the average value is: %.2f\n", avg);
}

void checkGrade(int data[], int size){
    float max = 0.00;
    float obt = 0.00;
    for (int i = 0; i < size; i++){
        obt += data[i];
        max += 100;
    }
    perc = (obt / max) * 100;
    printf("the percentage is %.2f\n", perc);
    cgpa = perc / 10;
    printf("the cgpa is %.2f\n", cgpa);
}

void scoreCard(){
    printf("TOTAL MARKS = %d\n", tot);
    printf("AVERGAE MARKS = %.2f\n", avg);
    printf("PERCENTAGE = %.2f\n", perc);
    printf("CGPA OBTAINED = %.2f\n", cgpa);
    printf("\n");
}

int main(){
    int oper;
    char ex;
    int marks[10];

    while(1){
        printf("\nto add marks: 1\n");
        printf("to check total: 2\n");
        printf("to check average: 3\n");
        printf("to find cgpa: 4\n");
        printf("to display score card: 5\n");
        printf("to exit: 6\n");
        scanf("%d", &oper);

        int size = n;
        switch(oper){
            case 1:
                readMarks(marks);
                break;
            case 2:
                checkTotal(marks, size);
                break;
            case 3:
                checkAvg(marks, size);
                break;
            case 4:
                checkGrade(marks, size);
                break;
            case 5:
                scoreCard();
                break;
            case 6:
                printf("sure to exit? (Y/n): ");
                scanf(" %c", &ex);
                if (ex == 'y' || ex == 'Y'){
                    printf("EXITED\n");
                    return 0;
                }
                else{
                    break;
                }
        }

    }

    return 0;
}