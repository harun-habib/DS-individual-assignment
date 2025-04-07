#include <iostream>
using namespace std;

int findSmallest(int arr[], int size) {
    // Assuming the first element is the smallest
    int smallest = arr[0];
    
    // Traverse the array to find the smallest element
    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];  // Update smallest if a smaller element is found
        }
    }
    
    return smallest;  // Return the smallest element
}

int main() {
    // Example array
    int arr[] = {34, 15, 88, 2, 5, 29};
    int size = sizeof(arr) / sizeof(arr[0]);  // Size of the array
    
    // Find and print the smallest number
    int smallest = findSmallest(arr, size);
    cout << "The smallest number in the array is: " << smallest << endl;
    
    return 0;
}

