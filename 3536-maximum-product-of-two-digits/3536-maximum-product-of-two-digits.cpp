class Solution {
public:
    int maxProduct(int n) {
        int m1 = 0, m2 = 0;

        while (n != 0) {
            int num = n % 10;
            n /= 10;

            if (num >= m1) {
                m2 = m1;
                m1 = num;
            }
            else if (num > m2) {
                m2 = num;
            }
        }

        return m1 * m2;
    }
};