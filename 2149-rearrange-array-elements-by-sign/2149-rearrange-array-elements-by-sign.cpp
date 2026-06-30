class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       queue<int> posi,negi;
       for(auto x : nums)
       {
            if(x > 0) posi.push(x);
            else negi.push(x);
       } 
       vector<int> ans;
       for(int i = 0;i < nums.size();i++)
       {
            if(!(i & 1))
            {
                ans.push_back(posi.front());
                posi.pop();
            }
            else
            {
                ans.push_back(negi.front());
                negi.pop();
            }
        }
        return ans;
    }
};