
#include <iostream>
#include <vector>
using namespace std;

// Merge two subarrays into a sorted array using pointer arithmetic
void merge(int* arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temporary arrays to hold left and right subarrays
    vector<int> L(n1), R(n2);

    // Copy data into temporary arrays
    for (int i = 0; i < n1; i++) {
        L[i] = *(arr + left + i);
    }
    for (int i = 0; i < n2; i++) {
        R[i] = *(arr + mid + 1 + i);
    }

    // Merge the temporary arrays back into the original array
    int i = 0, j = 0, k = left;

    // Compare elements from L and R and copy the smaller one back to arr
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            *(arr + k) = L[i];
            i++;
        } else {
            *(arr + k) = R[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of L[], if any
    while (i < n1) {
        *(arr + k) = L[i];
        i++;
        k++;
    }

    // Copy remaining elements of R[], if any
    while (j < n2) {
        *(arr + k) = R[j];
        j++;
        k++;
    }
}

// Merge Sort function that recursively divides the array and then merges
void mergeSort(int* arr, int left, int right) {
    if (left < right) {
        // Find the midpoint
        int mid = left + (right - left) / 2;

        // Recursively sort the first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
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

    // Call the mergeSort function
    mergeSort(arr, 0, n - 1);

    cout << "Sorted Array: ";
    printArray(arr, n);  // Print the sorted array

    return 0;
}
