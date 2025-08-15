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
// Alternate Solution
// //#include <cmath>
// bool isPowerOfFour(int n) {
//     if (n < 1) return false;
//     double k = log(n) / log(4);
//     return floor(k) == k;
// }