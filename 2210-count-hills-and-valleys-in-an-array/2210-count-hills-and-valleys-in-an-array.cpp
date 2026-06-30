class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int ans = 0;
        for(int i = 1;i < nums.size();i++)
        {
            if(nums[i] == nums[i - 1])continue;
            int j = i - 1;
            while(j >= 0 && nums[j] == nums[i])j--;
            int k = i + 1;
            while (k < nums.size() && nums[k] == nums[i]) k++;
            if (j >= 0 && k < nums.size()) {
                if ((nums[i] > nums[j] && nums[i] > nums[k]) ||
                    (nums[i] < nums[j] && nums[i] < nums[k])) {
                    ans++;
                }
            }
        }
        return ans;
    }
};