#include <stdio.h>

int secondLargest(int arr[], int n)
{
    int largest, second;

    // Compare first two elements
    if (arr[0] > arr[1])
    {
        largest = arr[0];
        second  = arr[1];
    }
    else
    {
        largest = arr[1];
        second  = arr[0];
    }

    // Compare remaining elements
    for (int i = 2; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
     // If current element is greater than second largest but not equal to the largest   
        else if (arr[i] > second && arr[i] != largest)       
        {
            second = arr[i];
        }
    }

    return second;
}

int main()
{
    //Declare array
    int arr[] = {30,25,45,60,50};

    // Caculate the size of array
    int n = sizeof(arr) / sizeof(arr[0]);

    //print the second largest element ofthe array
    printf("Second largest element = %d\n", secondLargest(arr, n));

    return 0;
}