#include <stdio.h>

int main() {
    int arr[] = {10, 21, 4, 45, 66, 93};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, evenSum = 0, oddSum = 0;

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }

    printf("Sum of even elements: %d\n", evenSum);
    printf("Sum of odd elements: %d\n", oddSum);

    return 0;
}


#include <stdio.h>

int main() {
    int arr[] = {10, 21, 4, 45, 66, 93};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, evenCount = 0, oddCount = 0;

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("Even elements: %d\n", evenCount);
    printf("Odd elements: %d\n", oddCount);

    return 0;
}

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 4, 50, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, first, second;

    if (n < 2) {
        printf("Array does not have enough elements\n");
        return 0;
    }

    first = second = 2147483647;  // Maximum possible integer value

    for (i = 0; i < n; i++) {
        if (arr[i] < first) {
            second = first;
            first = arr[i];
        } else if (arr[i] < second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == 2147483647) {
        printf("No second smallest element\n");
    } else {
        printf("Second smallest element: %d\n", second);
    }

    return 0;
}
