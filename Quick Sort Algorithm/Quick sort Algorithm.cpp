#include <iostream>
using namespace std;

// A function to swap two elements
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
// A function to partition the array around a pivot element
int partition(int arr[], int low, int high)
{
    // Choose the last element as the pivot
    int pivot = arr[high];

    // Initialize the index of smaller element
    int i = low - 1;

    // Move the elements smaller than or equal to the pivot to the left of i
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    // Place the pivot at its correct position and return its index
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}
// A recursive function to sort an array using quick sort
void quickSort(int arr[], int low, int high)
{
    // Base case: if the array has one or zero elements, it is already sorted
    if (low < high)
    {
        // Partition the array and get the index of the pivot
        int pi = partition(arr, low, high);

        // Recursively sort the subarrays on the left and right of the pivot
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
// A function to print an array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
// A main function to test the program
int main()
{
    // An example array to sort
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Print the original array
    cout << "Original array: ";
    printArray(arr, n);

    // Sort the array using quick sort
    quickSort(arr, 0, n - 1);

    // Print the sorted array
    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}