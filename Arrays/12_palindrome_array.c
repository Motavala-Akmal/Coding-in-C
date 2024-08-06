#include <stdio.h>
#include <stdbool.h>

int main() {
    int arr[] = {1, 2, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;
    bool isPalindrome = true;

    for (i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        printf("Array is a palindrome\n");
    } else {
        printf("Array is not a palindrome\n");
    }

    return 0;
}
