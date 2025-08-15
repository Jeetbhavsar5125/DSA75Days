# Day 01 - Maximum Good Integer

## Problem Description
You are given a string `num` representing a large integer.  

An integer is called **good** if it meets the following conditions:  
1. It is a **substring of length 3** of `num`.  
2. All three characters are the **same digit**.  

Return the **maximum good integer** as a string. If no such integer exists, return `""`.  

**Note:**  
- A substring is a contiguous sequence of characters within a string.  
- Leading zeros are allowed in both `num` and good integers.  

---

## Examples

**Example 1:**
```python
Input: num = "6777133339"
Output: "777"
Explanation: Good integers are "777" and "333". Maximum is "777".
```
**Example 2:**
```python
Input: num = "2300019"
Output: "000"
Explanation: Only good integer is "000".
```
**Example 3:**
```python
Input: num = "42352338"
Output: ""
Explanation: No substring of length 3 has all identical digits.
```

## Constraints
`- 3 <= num.length <= 1000`
