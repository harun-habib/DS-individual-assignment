
#include <iostream>
using namespace std;

// Bubble Sort function using pointers
void bubbleSort(int* arr, int n) {
    // Outer loop to iterate over the array
    for (int i = 0; i < n - 1; i++) {
        // Inner loop to compare adjacent elements
        for (int j = 0; j < n - i - 1; j++) {
            // Compare the adjacent elements using pointer arithmetic
            if (*(arr + j) > *(arr + j + 1)) {
                // Swap the elements using pointers
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
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

    // Call the bubbleSort function
    bubbleSort(arr, n);

    cout << "Sorted Array: ";
    printArray(arr, n);  // Print the sorted array

    return 0;
}
