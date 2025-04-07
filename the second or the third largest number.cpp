
#include <iostream>
#include <climits>
using namespace std;

// Function to find the second largest element
int findSecondLargest(int arr[], int size) {
    if (size < 2) {
        cout << "Array should have at least two elements!" << endl;
        return INT_MIN;  // return minimum integer value to indicate an error
    }
    
    int first = INT_MIN, second = INT_MIN;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }
    
    return second;
}

// Function to find the third largest element
int findThirdLargest(int arr[], int size) {
    if (size < 3) {
        cout << "Array should have at least three elements!" << endl;
        return INT_MIN;  // return minimum integer value to indicate an error
    }
    
    int first = INT_MIN, second = INT_MIN, third = INT_MIN;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] < first) {
            third = second;
            second = arr[i];
        } else if (arr[i] > third && arr[i] < second) {
            third = arr[i];
        }
    }
    
    return third;
}

int main() {
    int arr[] = {34, 15, 88, 2, 5, 29, 89};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Find and print the second largest element
    int secondLargest = findSecondLargest(arr, size);
    if (secondLargest != INT_MIN) {
        cout << "The second largest number in the array is: " << secondLargest << endl;
    }
    
    // Find and print the third largest element
    int thirdLargest = findThirdLargest(arr, size);
    if (thirdLargest != INT_MIN) {
        cout << "The third largest number in the array is: " << thirdLargest << endl;
    }
    
    return 0;
}
