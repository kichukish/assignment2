#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int freq[MAX_SIZE];
    int n, i, j, count;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements in the array: \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1; // initialize frequency count to -1
    }

    // Count the frequency of each element
    for (i = 0; i < n; i++)
    {
        count = 1;
        for (j = i+1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0)
        {
            freq[i] = count;
        }
    }

    // Display the frequency of each element
    printf("\nFrequency of each element in the array: \n");
    for (i = 0; i < n; i++)
    {
        if (freq[i] != 0)
        {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}

