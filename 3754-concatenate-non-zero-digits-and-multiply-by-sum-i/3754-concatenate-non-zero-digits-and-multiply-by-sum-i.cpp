class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n);
        string filtered = "";
        long long digit_sum = 0;

        for (char c : s) {
            if (c != '0') {
                filtered += c;
                digit_sum += (c - '0');
            }
        }

        if (filtered.empty()) {
            return 0;
        }

        long long x = stoll(filtered);
        return x * digit_sum;
    }
};