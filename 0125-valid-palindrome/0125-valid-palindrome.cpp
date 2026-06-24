class Solution {
public:
    bool isPalindrome(string s) {
        string filtered = "";
        for (char c : s) {
            if (isalnum(c))
                filtered += tolower(c);
        }
        string t = filtered;
        reverse(t.begin(), t.end());
        return filtered == t;
    }
};