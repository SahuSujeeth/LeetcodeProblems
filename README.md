
# LeetCode Solutions – Day 1

## 🧩 Problem 1: Two Sum

### Problem Statement
Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to `target`.  
Each input has exactly one solution, and the same element cannot be used twice.

---

### Sample Input / Output
Input: nums = [2,7,11,15], target = 9  
Output: [0,1]

---

### Difficulty
- Easy

---

# LeetCode Solutions – Day 2

## 🧩 Problem 9: Palindrome Number  

### Problem Statement  
Given an integer `x`, return **true** if `x` is a palindrome, and **false** otherwise.  
A palindrome is a number that reads the same forward and backward.  

---

### Sample Input / Output  
**Input:** x = 121  
**Output:** true  

**Input:** x = -121  
**Output:** false  

**Input:** x = 10  
**Output:** false  

---

### Difficulty  
- Easy

---

# 📘 Day 3 – Roman to Integer

### Problem Statement  
Convert a Roman numeral into an integer.  
Roman numerals are represented by seven symbols: I, V, X, L, C, D and M.  

For example:  
- II → 2  
- IV → 4  
- IX → 9  
- LVIII → 58  
- MCMXCIV → 1994  

---

### Approach  
1. Create a map of Roman symbols to their integer values.  
2. Traverse the string from left to right.  
3. If the current value is less than the next value, subtract it. Otherwise, add it.  

---

### Output (Sample)  
- II → 2  
- IV → 4  
- IX → 9  
- LVIII → 58  
- MCMXCIV → 1994

### Difficulty  
- Easy

---

# 📘 Day 4 – Longest Common Prefix

### Problem Statement  
Write a function to find the **longest common prefix string** amongst an array of strings.  
If there is no common prefix, return an empty string `""`.  

---


### Output (Sample)    
- Input: `["flower","flow","flight"]`  
  Output: `"fl"`  

- Input: `["dog","racecar","car"]`  
  Output: `""`  

---

### Approach  
1. Take the first string as a prefix.  
2. Compare it with each string in the array.  
3. If the string doesn’t start with the prefix, keep shortening the prefix.  
4. Return the final prefix.  

---

### Difficulty
- Easy

---

## Day 5 - Valid Parentheses
Problem Statement

Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
An input string is valid if:
Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.

Examples
Input:` s = "()"`
Output:` true`

Input: `s = "()[]{}"`
Output: `true`

Input: `s = "(]"`
Output: `false`

Input: `s = "([])"`
Output:`true`

Input: `s = "([)]"`
Output: `false`


## Approach

Use a stack to track opening brackets.
Iterate over the string:
If the character is an opening bracket '(', '{', '[', push it to the stack.
If it is a closing bracket, check the top of the stack:
If it matches, pop the top.
Otherwise, return false.
At the end, if the stack is empty, return true.
Why Stack?

Stack ensures Last-In-First-Out (LIFO) order, which perfectly matches nested bracket structures.

 ## Complexity
Time Complexity: O(n) – each character is processed once.
Space Complexity: O(n) – in the worst case, all opening brackets are stored in the stack

## Difficulty
- Easy.

---

# 🚀 Day 6 – LeetCode Problem

## 📘 Problem: Merge Two Sorted Lists (LeetCode #21)

You are given the heads of two sorted linked lists `list1` and `list2`.

➡️ Merge the two lists into **one sorted linked list**.  
➡️ The merged list should be made by splicing together the nodes of the first two lists.  
➡️ Return the head of the merged linked list.

---

## 🔹 Example

**Input:**
list1 = [1,2,4]
list2 = [1,3,4]

makefile
Copy code

**Output:**
[1,1,2,3,4,4]

## Diffculty
-Easy

---

## 🚀 LeetCode Solutions – Day 7
🔄 Problem 7: Reverse Integer
Problem Statement
Given a signed 32-bit integer x, return its digits reversed.
If the reversed integer overflows (goes beyond the range of a 32-bit signed integer), return 0.

Sample Input / Output

`Input: 123`
`Output: 321`

`Input: -123`
`Output: -321`

`Input: 1534236469`
`Output: 0 (overflow case)`

Constraints
−2³¹ ≤ x ≤ 2³¹ − 1

Must handle overflow safely.

## Difficulty
 - Medium

---

# 🚀 Day 8 – Palindrome Number (LeetCode #9)

## 📌 Problem Statement
Given an integer `x`, return **true** if `x` is a palindrome, and **false** otherwise.

- A palindrome is a number that reads the same forward and backward.
- Example: `121` → palindrome ✅, `-121` → not palindrome ❌, `10` → not palindrome ❌.

## Difficulty
 - Easy

---

# Day 9 - Add Digits

## Problem Description
Given an integer `num`, repeatedly add all its digits until the result has only one digit, and return it.

### Example 1
**Input:**
num = 38

**Process:**
3 + 8 = 11,
1 + 1 = 2

**Output:**
2

### Example 2
**Input:**
num = 0

**Output:**
0

### Difficulty
- Easy

---

 ### Day-10 First Unique Character in a String
 ## Problem Statement

Given a string s, find the first non-repeating character in it and return its index.
If it does not exist, return -1.

🔑 Examples

Example 1:
`Input: s = "leetcode"`
`Output: 0`

Example 2:
`Input: s = "loveleetcode"`
`Output: 2`

Example 3:
`Input: s = "aabb"`
`Output: -1`

💡 Approach

Count the frequency of each character in the string.
Traverse the string again to find the first character with frequency 1.
Return its index.
If no such character exists, return -1.

## Time Complexity
O(n) → where n is the length of the string (two passes).

## Space Complexity
O(1) → Since only 26 lowercase letters (constant space).

### Difficulty
- Easy

  
---
## Day - 11 Fibonaci nth digit of the given number.

In this problem i understanded the recursion part detailly and the multiple recursive call also understanded very well...
--> And reccursive understanded with parameters and with function also...
-->And about base condition also... its like to stop the infinite recursions like infinty loop...

## Time Complexity
O(2^n) -> for the every function call by twice foe the anytime so the time complexuty is the 2 power of the n exponentially... this is the maximum time complexity for the fibonaci...
### Diffculty
- Easy

---

# 📘 Day 12 – LeetCode 1838: Frequency of the Most Frequent Element  

## 🔹 Problem Statement  
The frequency of an element is the number of times it occurs in an array.  

You are given an integer array `nums` and an integer `k`.  
In **one operation**, you can choose an index of `nums` and increment the element at that index by `1`.  

Return the **maximum possible frequency** of an element after performing at most `k` operations.  

## Diffculty
-  Easy

---

# Day 13 – LeetCode 1752. Check if Array Is Sorted and Rotated

## Problem Statement
Given an integer array `nums`, return **true** if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return **false**.

There may be duplicates in the original array.



### Example 1:
**Input:**  
`nums = [3,4,5,1,2]`  

**Output:**  
`true`  

**Explanation:**  
The original sorted array is `[1,2,3,4,5]`.  
After rotating by 2 positions → `[3,4,5,1,2]`.

---

### Example 2:
**Input:**  
`nums = [2,1,3,4]`  

**Output:**  
`false`  

**Explanation:**  
No rotation of a sorted array can make `[2,1,3,4]`.

---

## Approach
1. Traverse the array and count how many times the **sorted order breaks** (i.e., when `nums[i] > nums[(i+1) % n]`).
2. If the break happens **more than once**, return `false`.
3. Otherwise, return `true`.

This works because a sorted & rotated array can have **at most one "drop" point**.

---

## Complexity
- **Time Complexity:** O(n) – one pass through the array.  
- **Space Complexity:** O(1) – constant extra space.

---

## Diffculty
- Easy
....

revised 








