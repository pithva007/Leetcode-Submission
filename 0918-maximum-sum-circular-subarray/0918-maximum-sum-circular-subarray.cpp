class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        // Initialize tracking variables with the first element
        int maxsum = nums[0];
        int minsum = nums[0];
        int currmax = nums[0];
        int currmin = nums[0];
        
        long long sum = accumulate(nums.begin(), nums.end(), 0LL);
        
        for(int i = 1; i < nums.size(); i++) {
            int x = nums[i];
            
            currmax = max(x, currmax + x);
            maxsum = max(maxsum, currmax);
            
            currmin = min(x, currmin + x);
            minsum = min(minsum, currmin);
        }
        
        if (sum == minsum) {
            return maxsum;
        }
        
        return max(maxsum, (int)(sum - minsum));
    }
};
