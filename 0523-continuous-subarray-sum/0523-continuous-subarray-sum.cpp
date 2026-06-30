class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = -1;  
        int pfs = 0;
        for (int i = 0; i < nums.size(); i++) {
            pfs += nums[i];
            int rem = pfs % k;
            if (mp.count(rem)) {
                if (i - mp[rem] >= 2)
                    return true;
            } else {
                mp[rem] = i;  
            }
        }

        return false;
    }
};