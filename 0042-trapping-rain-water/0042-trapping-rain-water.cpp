class Solution {
public:
    int trap(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        int leftmax = 0;
        int rightmax = 0;
        int water = 0;
        while(left < right){
            if(nums[left] < nums[right])
            {
                if(nums[left] >= leftmax){
                    leftmax = nums[left];
                }
                else water += leftmax - nums[left];
                left++;
            }
            else{
                if(nums[right] >= rightmax){
                    rightmax = nums[right];
                }
                else water += rightmax - nums[right];
                right--;
            }
        }
        return water;
    }
};