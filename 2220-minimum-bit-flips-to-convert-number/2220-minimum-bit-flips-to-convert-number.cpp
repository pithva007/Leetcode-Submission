class Solution {
public:
    int minBitFlips(int start, int goal) {
        // num ^= (1 << pos) toggle the bit
       return  __builtin_popcount(start ^ goal);
    }
};