#include <stdio.h>

int main() {
    int arr[] = {0, 3, 1, 8, 2, 0, 0, 5, 7, 0, 4, 0, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, count = 0;

    for (i = 0; i < n; i++)
     {
        if (arr[i] != 0)
         {
            arr[count++] = arr[i];
        }
    }

    while (count < n)
     {
        arr[count++] = 0;
    }

    printf("Array after moving zeroes to end: ");
    for (i = 0; i < n; i++)
     {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
