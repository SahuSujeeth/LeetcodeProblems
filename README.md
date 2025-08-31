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


