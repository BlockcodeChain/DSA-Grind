<!-- # DSA-Grind 🖥️ | Day 1

Welcome to **DSA-Grind**! This repository contains **15 basic to intermediate C++ programs** for arrays, vectors, and sequences.  
The goal is to **strengthen problem-solving skills** and prepare for coding interviews.  

---

## 📌 Problem List (Day 1)

| #  | Problem | Description |
|----|---------|-------------|
| Q1  | Linear Search | Find an element in an array. |
| Q2  | Find Max & Min | Determine the maximum and minimum elements in an array. |
| Q3  | 1st, 2nd, 3rd Max & Min | Find the 1st, 2nd, and 3rd largest and smallest elements. |
| Q4  | Reverse Array | Reverse the elements of an array. |
| Q5  | Rotate Array by 1 | Shift all array elements by 1 position. |
| Q6  | Fibonacci Series | Print first `n` Fibonacci numbers. |
| Q7  | Missing Number | Find the missing number in a sequence. |
| Q8  | Char Array a–z | Create and print an array containing `'a'` to `'z'`. |
| Q9  | Smallest Positive Missing | Find the smallest positive missing number in an array. |
| Q10 | Vector Input & Print | Take input in a vector and print all elements. |
| Q11 | Move Negatives to End | Move all negative elements to the end of the array. |
| Q12 | Move Zero to Start | Move all zeros to the beginning of the array. |
| Q13 | Move Zero to End | Move all zeros to the end of the array. |
| Q14 | Move Negatives to Start | Move all negative elements to the beginning of the array. |
| Q15 | Number of Occurrences | Count the number of occurrences of a given element. |

---

## 📌 Syntax Template

```cpp
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter number of elements: ";
    cin >> num;

    int array[30];
    for (int i = 0; i < num; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> array[i];
    }

    // Your logic here

    return 0;
} -->
