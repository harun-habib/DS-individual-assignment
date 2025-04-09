
# Pointer Sorting Algorithm using Merge Sort

This repository contains a C++ implementation of the **Pointer Sorting Algorithm**, which sorts an array using the **Merge Sort** algorithm on an array of indices.

## Algorithm Explanation

In pointer sorting:
1. We create an array of indices to reference the original data.
2. We sort these indices based on the values they point to, using **Merge Sort**.
3. The result is a sorted array by accessing the original array via the sorted indices.

## Files

- **main.cpp**: Contains the C++ implementation of the Pointer Sorting algorithm using Merge Sort.

## Time Complexity Analysis

- **Pointer Sort**: 
    - Time Complexity: \(O(n \log n)\) (due to Merge Sort)
    - Space Complexity: \(O(n)\)
- **Comparison with Merge Sort**:
    - Traditional Merge Sort: Time Complexity \(O(n \log n)\), Space Complexity \(O(n)\)
  
The time complexities are the same, but pointer sorting requires additional memory for storing indices.

## Usage

1. Clone this repository:
   ```bash
   git clone <repository_url>
   cd pointer-sorting
