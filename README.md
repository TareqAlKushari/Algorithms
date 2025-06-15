# Algorithms

A practical collection of fundamental algorithms implemented in C++.

## Overview

This repository provides efficient, well-documented implementations of classic algorithms in C++. It serves as a resource for students, educators, interview preparation, and developers looking to understand or reuse core algorithms in their own projects. The code is organized by topic for easy navigation and learning.

## Features

- **Comprehensive Coverage:**  
  Includes sorting, searching, graph algorithms, dynamic programming, greedy algorithms, and more.
- **Template-Based Where Appropriate:**  
  Many algorithms use C++ templates for flexibility and reusability.
- **Educational Clarity:**  
  Code is formatted and commented for readability and learning.
- **Test Cases:**  
  Example usage and tests provided for many algorithms.
- **No External Dependencies:**  
  All code uses standard C++.

## Algorithms Included

- Sorting (Bubble, Selection, Insertion, Merge, Quick, Heap, etc.)
- Searching (Linear, Binary, etc.)
- Graph algorithms (BFS, DFS, Dijkstra, Kruskal, Prim, Topological Sort, etc.)
- Dynamic Programming (Knapsack, Longest Common Subsequence, etc.)
- Greedy Algorithms (Activity Selection, Huffman Coding, etc.)
- Backtracking (N-Queens, Sudoku Solver, etc.)
- Additional algorithms as the repository evolves

## Usage

### 1. Clone the repository

```bash
git clone https://github.com/TareqAlKushari/Algorithms.git
cd Algorithms
```

### 2. Include the desired header(s) in your project

```cpp
#include "sorting.h"
#include "graph_algorithms.h"
// etc.
```

### 3. Example

```cpp
#include <iostream>
#include "sorting.h"

int main() {
    std::vector<int> arr = {5, 3, 8, 4, 2};
    bubbleSort(arr);
    for (int x : arr) {
        std::cout << x << " ";
    }
    std::cout << std::endl; // Output: 2 3 4 5 8
    return 0;
}
```

### 4. Build and Run Tests

You can build and run test files (if provided) using a C++ compiler:

```bash
g++ -std=c++11 test_sorting.cpp -o test_sorting
./test_sorting
```

## Contributing

Contributions, improvements, and bug reports are welcome! Please open an issue or submit a pull request.

## License

This project is licensed under the MIT License.

---

*Created by [TareqAlKushari](https://github.com/TareqAlKushari)*
