class Solution {
public:
    vector<int> evenOddBit(int n) {
        int even = 0;
        int odd = 0;
        bool isEvenIndex = true;

        while (n > 0) {
            if (n & 1) {
                if (isEvenIndex) {
                    even++;
                } else {
                    odd++;
                }
            }
            n >>= 1;
            isEvenIndex = !isEvenIndex;
        }

        return {even, odd};
    }
};