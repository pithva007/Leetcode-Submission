class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans = 0;
        set<string> s;
        for(auto s: sentences){
            int temp = 0;
            for(int i = 0;i < s.size();i++){
                if(s[i] == ' ')temp++;
            }
            temp++;
            ans = max(ans,temp);
        }
        return ans;
    }
};