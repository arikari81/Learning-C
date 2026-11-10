//counting the number of ellemts per elemement

#include <stdio.h>

void countFrequency(int arr[], int n) {
    int visited[100] = {0};
    int i, j, count;

    for (i = 0; i < n; i++) {
        if (visited[i] == 1) {
            continue;
        }

        count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
                visited[j] = 1;
            }
        }

        printf("%d occurs %d time(s)\n", arr[i], count);
    }
}

int main() {
    int arr[100];
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    countFrequency(arr, n);

    return 0;
}





