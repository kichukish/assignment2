
#include <stdio.h>

int main()
{
    int arr[100], even[100], odd[100];
    int i, n, even_count = 0, odd_count = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements of array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)  // checking even numbers
        {
            even[even_count] = arr[i];
            even_count++;
        }
        else // checking odd numbers
        {
            odd[odd_count] = arr[i];
            odd_count++;
        }
    }

    printf("\nEven numbers in array: ");
    for (i = 0; i < even_count; i++)
    {
        printf("%d ", even[i]);
    }

    printf("\nOdd numbers in array: ");
    for (i = 0; i < odd_count; i++)
    {
        printf("%d ", odd[i]);
    }

    return 0;
}
