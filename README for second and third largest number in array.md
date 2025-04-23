
#  Find Second and Third Largest Numbers in an Array (C++)

This project is a simple C++ program designed to find the second and third largest numbers in an integer array. It uses linear traversal for efficient performance and is ideal for beginners learning array manipulation, comparisons, and conditional logic.

 Overview

- The program determines the second and third largest numbers in a static integer array.
- It performs the operation in a single pass through the array (O(n) time complexity).
- Includes input validation to ensure the array has enough elements.

 How It Works

 Finding the Second Largest Number

1. Start by checking if the array contains at least two elements.
2. Initialize two variables to represent the first and second largest numbers.
3. Loop through each element in the array.
4. If the current element is greater than the largest found so far:
   - Update the second largest to the current largest.
   - Update the largest with the current element.
5. If the current element is not the largest but greater than the second largest:
   - Update the second largest.
6. After the loop, return or display the second largest value.

Finding the Third Largest Number

1. Ensure the array has at least three elements.
2. Initialize three variables to track the first, second, and third largest numbers.
3. Loop through the array:
   - If a new highest number is found, update all three accordingly.
   - If a value is between the first and second, update the second and third.
   - If a value is between the second and third, update the third.
4. After the loop, return or display the third largest number.

How to Use the Program

1. Save the program in a `.cpp` file.
2. Compile the code using a C++ compiler (e.g., `g++`).
3. Run the compiled file in your terminal or command prompt.
4. View the output showing the second and third largest numbers in the array.

 Notes

- The program handles edge cases where the array has fewer than two or three elements.
- It avoids sorting for better performance.
- Can be extended to handle user input or dynamic arrays.
 Requirements

- A C++ compiler like GCC or Clang
- Compatible with Windows, Linux, or macOS
