# Day 01 - Maximum Good Integer

## Problem Description
You are given a string `num` representing a large integer.  

An integer is called **good** if it meets the following conditions:  
1. It is a **substring of length 3** of `num`.  
2. All three characters are the **same digit**.  

Return the **maximum good integer** as a string. If no such integer exists, return `""`.  

> **Note:**  
> - A substring is a contiguous sequence of characters within a string.  
> - Leading zeros are allowed in both `num` and good integers.  

---

## Constraints
- 3 <= num.length <= 1000

---

## Approach / Algorithm
1. Initialize an empty string `max_good`.  
2. Loop through the string from index `0` to `len(num)-3`.  
3. For each substring of length 3, check if all characters are the same.  
4. If yes, compare with `max_good` and update if it is larger.  
5. Return `max_good`.

**Algorithm Type:** Sliding Window / String Manipulation  

---

### Dry Run

**Example 1:** `num = "6777133339"`
```text
i=0, sub="677" -> not all same
i=1, sub="777" -> all same, max_good = "777"
i=2, sub="771" -> not all same
i=3, sub="713" -> not all same
i=4, sub="133" -> not all same
i=5, sub="333" -> all same, max_good = max("777", "333") = "777"
i=6, sub="333" -> all same, max_good remains "777"
i=7, sub="339" -> not all same
Result: "777"
```


**Example 2:** `num = "2300019"`  
```
i=0, sub="230" -> not all same
i=1, sub="300" -> not all same
i=2, sub="000" -> all same, max_good = "000"
i=3, sub="001" -> not all same
i=4, sub="019" -> not all same
Result: "000"
```
**Example 3:** `num = "42352338"`  
```
All substrings of length 3 are checked, none have all same digits
Result: ""
```


---

## Test Cases
- `"6777133339"` → `"777"`  
- `"2300019"` → `"000"`  
- `"42352338"` → `""`  

---

## Complexity Analysis
- **Time Complexity:** O(n), where n = length of `num`.  
- **Space Complexity:** O(1), only storing the maximum substring.
