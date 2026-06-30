class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        sort(nums.begin(),nums.end());
        for(int i = 0;i < n;i++)
        {
            for(int j = i + 1;j < n;j++)
            {
                int sum = nums[i] + nums[j];
                int k = lower_bound(nums.begin() + j + 1,nums.end(),sum) - nums.begin();
                count += k - j - 1;
            }
        }
        return count;
    }
};