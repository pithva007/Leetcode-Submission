class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long tot = accumulate(nums.begin(),nums.end(),0LL);
        long long left = 0;
        long long right = 0;
        int ans = 0;
        long long n = nums.size();
        for(int i = 0;i < n - 1;i++)
        {
            left += nums[i];
            right = tot - left;
            if(left >= right) ans++;
        }
        return ans;
    }
};