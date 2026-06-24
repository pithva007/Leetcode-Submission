class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        vector<int> v(256,-1); 
        int l=0,len = 0;
        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            if (v[c] >= l) 
            {
                l = v[c] + 1;
            }
            v[c] = i; 
            len = max(len, i - l + 1);
        }

    return len;
    }
};