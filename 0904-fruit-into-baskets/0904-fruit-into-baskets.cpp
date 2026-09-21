class Solution {
public:
    int totalFruit(vector<int>& nums) {
        unordered_map<int,int> mp;
        int left = 0;
        int maxlen = 0;
        for(int right = 0;right < nums.size();right++){
            mp[nums[right]]++;
            while(mp.size() > 2){
                mp[nums[left]]--;
                if(mp[nums[left]] == 0)
                {
                    mp.erase(nums[left]);
                }
                left++;
            }
            maxlen = max(maxlen, right - left + 1);
        }
        return maxlen;
    }
};