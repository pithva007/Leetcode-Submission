class Solution {
public:
    int maxArea(vector<int>& nums) {
        int ans = 0;
        int l = 0;
        int r = nums.size() - 1;
        while(l < r)
        {
            int h = min(nums[l],nums[r]);
            int width = r - l;
            int area = h * width;
            ans = max(ans,area);
            if(nums[l] < nums[r])l++;
            else r--;
        }
        return ans;
    }
};