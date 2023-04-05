
#include <stdio.h>

#define MAX_SIZE 100 // Maximum array size

int main()
{
    int arr[MAX_SIZE];
    int i, j, temp, size;

    // Input size of the array
    printf("Enter size of array: ");
    scanf("%d", &size);

    // Input elements in the array
    printf("Enter elements in the array:\n");
    for(i=0; i<size; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Sort array in descending order
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[i] < arr[j])
            {
                // Swap arr[i] and arr[j]
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Print array in descending order
    printf("\nElements of array in descending order:\n");
    for(i=0; i<size; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
