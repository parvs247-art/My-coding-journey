// function to reverse an array
#include <stdio.h>

void reverseArray(int arr[], int n)
{
    int i, temp;

    for(i = 0; i < n/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int i;

    reverseArray(arr, 5);

    printf("Reversed Array: ");
    for(i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    return 0;
}


    
   