
 Insertion Sort Using Pointers in C

This project provides a complete implementation of the **Insertion Sort** algorithm using **pointer arithmetic** in the C programming language. It's an educational demonstration of how sorting can be done using memory addresses instead of traditional array indexing.

Overview

**Insertion Sort** is a simple comparison-based sorting algorithm that builds the final sorted array one element at a time. It's efficient for small data sets and is often used in teaching for its straightforward logic.
 How It Works:
1. Start from the second element.
2. Compare it with the elements before it.
3. Shift larger elements one position ahead.
4. Insert the current element in the correct position.
5. Repeat until the array is sorted.

-File Description
- `insertion_sort.c`: The main C program that:
  - Declares an unsorted array.
  - Sorts it using insertion sort with pointer arithmetic.
  - Prints the array before and after sorting.

Concepts Covered
- Pointer arithmetic (`*(arr + i)` instead of `arr[i]`)
- Memory-based manipulation and traversal
- Sorting logic implementation using pointers
- In-place sorting (no extra memory used)

Compilation and Execution
You can compile and run the program using any C compiler. 