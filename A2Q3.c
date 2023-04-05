
#include <stdio.h>

int main()
{
    int arr[100], n, i, j, temp;
    float avg, sum = 0;
    int max1, max2, min1, min2;
    int found = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Read the elements of the array
    printf("Enter the elements of the array:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Sort the array in descending order
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Find the second largest and smallest elements in the array
    max1 = arr[0];
    max2 = arr[1];
    min1 = arr[n-1];
    min2 = arr[n-2];

    // Calculate the average of the second largest and smallest elements
    sum = max2 + min2;
    avg = sum / 2;

    // Check if the average is present in the array
    for(i=0; i<n; i++)
    {
        if(arr[i] == avg)
        {
            found = 1;
            break;
        }
    }

    // Print the results
    printf("Sorted array in descending order:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("The second largest element in the array is: %d\n", max2);
    printf("The second smallest element in the array is: %d\n", min2);
    printf("The average of the second largest and smallest elements is: %.2f\n", avg);

    if(found == 1)
    {
        printf("The average is present in the array.\n");
    }
    else
    {
        printf("The average is not present in the array.\n");
    }

    return 0;
}
