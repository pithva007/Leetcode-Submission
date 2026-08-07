class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> hash;
        int n = mat.size();
        int m = mat[0].size();
        int count = 0;
        for(int i = 0;i < n;i++)
        {
            for(int val : mat[i]){
                if(val == 1)count++;
                else break;
            }
            hash.push_back({count,i});
            count = 0;
        }
        sort(hash.begin(),hash.end());
        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(hash[i].second);
        }
        
        return ans;
    }
};