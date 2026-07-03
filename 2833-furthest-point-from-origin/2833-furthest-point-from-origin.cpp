class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int l = 0;
        int r = 0;
        int dash = 0;
        for(auto ch : moves)
        {
            if(ch == 'L')l++;
            if(ch == 'R')r++;
            if(ch == '_')dash++;
        }
        int ans = max(l,r) - min(l,r) + dash;
        return ans;
    }
};