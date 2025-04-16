#include <iostream>
using namespace std;

void selectionSort(int* arr, int n) {
  
    for (int i = 0; i < n - 1; i++) {  
        int minIdx = i;

        for (int j = i + 1; j < n; j++) {
            if (*(arr + j) < *(arr + minIdx)) {
                minIdx = j; 
            }
        }

        if (minIdx != i) {
            int temp = *(arr + i);
            *(arr + i) = *(arr + minIdx);
            *(arr + minIdx) = temp;
        }
    }
}

void printArray(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";  
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]); 

    cout << "Original Array: ";
    printArray(arr, n); 

    selectionSort(arr, n);

    cout << "Sorted Array: ";
    printArray(arr, n); 

    return 0;
}
