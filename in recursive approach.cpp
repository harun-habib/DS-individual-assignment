
#include <iostream>
using namespace std;

// Recursive Binary Search Function
int binarySearchRecursive(int arr[], int left, int right, int target) {
    if (left > right) {
        return -1;  // Target not found
    }

    int mid = left + (right - left) / 2;
    
    // If target is found at mid
    if (arr[mid] == target) {
        return mid;
    }
    
    // If target is greater, search in the right half
    if (arr[mid] < target) {
        return binarySearchRecursive(arr, mid + 1, right, target);
    }
    // If target is smaller, search in the left half
    else {
        return binarySearchRecursive(arr, left, mid - 1, target);
    }
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;
    
    int result = binarySearchRecursive(arr, 0, size - 1, target);
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    
    return 0;
}
