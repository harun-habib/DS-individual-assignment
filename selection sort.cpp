#include <iostream>
using namespace std;

// Selection Sort function using pointers
void selectionSort(int* arr, int n) {
    // Outer loop to iterate through the array
    for (int i = 0; i < n - 1; i++) {
        // Find the minimum element in the unsorted part of the array
        int minIdx = i;

        // Inner loop to find the smallest element from i to n-1
        for (int j = i + 1; j < n; j++) {
            // Compare elements using pointer arithmetic
            if (*(arr + j) < *(arr + minIdx)) {
                minIdx = j;  // Update minIdx to the new minimum element
            }
        }

        // Swap the minimum element with the first element of the unsorted part
        if (minIdx != i) {
            int temp = *(arr + i);
            *(arr + i) = *(arr + minIdx);
            *(arr + minIdx) = temp;
        }
    }
}

// Function to print the array
void printArray(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";  // Accessing array elements using pointers
    }
    cout << endl;
}

int main() {
    // Example array to sort
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);  // Find the number of elements

    cout << "Original Array: ";
    printArray(arr, n);  // Print the original array

    // Call the selectionSort function
    selectionSort(arr, n);

    cout << "Sorted Array: ";
    printArray(arr, n);  // Print the sorted array

    return 0;
}

