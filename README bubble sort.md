# Bubble Sort Using Pointers in C++

## Overview

Bubble Sort is a simple sorting algorithm that repeatedly steps through the list to be sorted, compares adjacent elements, and swaps them if they are in the wrong order. The process is repeated until the list is sorted.

This implementation uses **pointer arithmetic** to access and manipulate elements in the array instead of using traditional array indexing.

## Algorithm

### Steps:
1. **Initialize the array**: 
   - Given an array of `n` elements, the goal is to sort it in ascending order.
   
2. **Outer loop**:
   - Iterate through the array from index 0 to `n-1`.
   - The outer loop ensures that the largest unsorted element "bubbles" to its correct position.

3. **Inner loop**:
   - For each element in the array (excluding the already sorted part), compare adjacent elements.
   - If the current element is greater than the next, swap them.

4. **Pointer arithmetic for element comparison**:
   - Instead of using array indexing (e.g., `arr[i]`), use pointer arithmetic (`*(arr + i)`) to access and compare elements.

5. **Swapping elements**:
   - If the current element is greater than the next, swap the elements using a temporary variable `temp`.

6. **Repeat** until the array is fully sorted.

7. **Print the sorted array**.




