// Bubble sort Algorithm in C++
#include <iostream>
using namespace std;

// Function to swap two elements
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to perform bubble sort on an array
void bubbleSort(int arr[], int n) {
    // Loop through the array from 0 to n-1
    for (int i = 0; i < n - 1; i++) {
        // Loop through the array from 0 to n-i-1
        for (int j = 0; j < n - i - 1; j++) {
            // Compare adjacent elements and swap them if they are out of order
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Function to print an array
void printArray(int arr[], int n) {
    // Loop through the array and print each element
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Main function
int main() {
    // Declare and initialize an array of integers
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Print the original array
    cout << "Original array: ";
    printArray(arr, n);

    // Call the bubble sort function on the array
    bubbleSort(arr, n);

    // Print the sorted array
    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
