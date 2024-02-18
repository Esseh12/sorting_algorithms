# Sorting Algorithms

This repository contains implementations of various sorting algorithms in C. Sorting algorithms are fundamental in computer science and are used to arrange elements in a list or array in a specific order, such as numerical or lexicographical order. Understanding different sorting algorithms and their characteristics is crucial for optimizing performance in many applications.

## Implemented Algorithms

### 1. Bubble Sort

Bubble Sort is a simple comparison-based sorting algorithm. It repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.

### 2. Selection Sort

Selection Sort is an in-place comparison-based sorting algorithm. It divides the input list into two parts: a sorted sublist and an unsorted sublist. Initially, the sorted sublist is empty, and the unsorted sublist contains all the elements. The algorithm selects the smallest element from the unsorted sublist and swaps it with the leftmost unsorted element, moving the sublist boundaries one element to the right.

### 3. Insertion Sort

Insertion Sort is a simple comparison-based sorting algorithm that builds the final sorted list one element at a time. It iterates over the input list, removing one element and inserting it into its correct position in the sorted list.

### 4. Merge Sort

Merge Sort is a divide-and-conquer sorting algorithm that divides the input list into smaller sublists, sorts each sublist recursively, and then merges the sorted sublists to produce the final sorted list.

### 5. Quick Sort

Quick Sort is a highly efficient comparison-based sorting algorithm. It picks a pivot element and partitions the list into two sublists such that elements less than the pivot are on its left, and elements greater than the pivot are on its right. It then recursively sorts the sublists.

## Usage

Each sorting algorithm is implemented as a separate function in the provided C files. To use a specific sorting algorithm, simply call its corresponding function with the input list as an argument.

## Performance Comparison

### Best, Worst, and Average Case Time Complexities

- Bubble Sort:
  - Best Case: O(n)
  - Worst Case: O(n^2)
  - Average Case: O(n^2)
  
- Selection Sort:
  - Best Case: O(n^2)
  - Worst Case: O(n^2)
  - Average Case: O(n^2)

- Insertion Sort:
  - Best Case: O(n)
  - Worst Case: O(n^2)
  - Average Case: O(n^2)

- Merge Sort:
  - Best Case: O(n log n)
  - Worst Case: O(n log n)
  - Average Case: O(n log n)

- Quick Sort:
  - Best Case: O(n log n)
  - Worst Case: O(n^2)
  - Average Case: O(n log n)

### Space Complexity

- Bubble Sort: O(1)
- Selection Sort: O(1)
- Insertion Sort: O(1)
- Merge Sort: O(n)
- Quick Sort: O(log n) to O(n) (depending on the implementation)

## Contribution

Contributions are welcome! If you have any improvements or additional sorting algorithms to add, feel free to submit a pull request.

## Contact

- This repository was created by Gbenmo Ese and Olayode Yusuf.
- feel free to reach out on twitter. @gbenmo_ese and @doctware
