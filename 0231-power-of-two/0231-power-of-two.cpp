class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0)return false;
        return !(n & (n - 1));

        // 8 => 1000    --> 2^x true
        // 7 => 0111    --> not 
        //.  => 0000 means true
        // else false
    }
};