This project demonstrates the **Bubble Sort** algorithm implemented using **pointer arithmetic** in the C programming language. It's a great exercise for understanding how sorting algorithms and pointer operations can work hand-in-hand in C.

Bubble Sort is a simple comparison-based sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The algorithm continues to pass through the list until it is sorted.

 How It Works:
1. Compare each pair of adjacent items.
2. If they’re in the wrong order, swap them.
3. After the first pass, the largest element "bubbles up" to the end.
4. Repeat the process for the remaining unsorted section.

 File Description
- `bubble_sort.c`: Contains the full implementation of bubble sort using pointer arithmetic.

Concepts Covered
- Pointer arithmetic (`*(arr + i)` instead of array indexing)
- Swapping elements using pointers
- Bubble sort logic and nested loops
- In-place sorting (no additional memory required)

- How to Compile and Run
To compile the code using `gcc`, open your terminal and run:

```bash
gcc bubble_sort.c -o bubble_sort
./bubble_sort
