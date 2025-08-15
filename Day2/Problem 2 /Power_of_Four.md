# introduction.md
Problem 342 in LeetCode
## Problem: Power of Four

Given an integer `n`, determine whether it is a power of four.

An integer `n` is a power of four if there exists an integer `x` such that:
n == 4^x

### Examples:
- **Input:** n = 16 → **Output:** true (because 4² = 16)
- **Input:** n = 5 → **Output:** false
- **Input:** n = 1 → **Output:** true (because 4⁰ = 1)

### Constraints:
- -2³¹ ≤ n ≤ 2³¹ - 1

---

# solution.cpp
```cpp
#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n < 1) return false; // must be positive
        while (n % 4 == 0) {     // keep dividing by 4 if divisible
            n /= 4;
        }
        return n == 1;           // if reduced to 1, it's a power of four
    }
};
```

---

# notes.md

## Thought Process
1. **Definition**: A number `n` is a power of four if it can be written as `4^x` where `x` is an integer ≥ 0.
2. **Constraints**: 
   - `n` must be **positive**.
   - Negative or zero values can be eliminated immediately.
3. **Approach**:
   - Keep dividing `n` by `4` while it's divisible by `4`.
   - If after all divisions `n` becomes `1`, it is a power of four.
   - Else, it’s not.

### Time Complexity:
- **O(log₄(n))** because each division by 4 reduces the size of `n` by a factor of 4.

### Space Complexity:
- **O(1)** — we only use a few variables.

---

## Alternative Approaches

### 1. Using Logarithms
```cpp
#include <cmath>
bool isPowerOfFour(int n) {
    if (n < 1) return false;
    double k = log(n) / log(4);
    return floor(k) == k;
}
```
