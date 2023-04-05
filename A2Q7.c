#include <stdio.h>

int main() {
    int n, i, j, temp;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    // reverse the array
    for (i = 0, j = n - 1; i < j; i++, j--) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    printf("\nReversed array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    // check if array is palindrome
    int isPalindrome = 1;
    for (i = 0, j = n - 1; i < j; i++, j--) {
        if (arr[i] != arr[j]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome) {
        printf("\nArray is palindrome.");
    } else {
        printf("\nArray is not palindrome.");
    }
    return 0;
}

