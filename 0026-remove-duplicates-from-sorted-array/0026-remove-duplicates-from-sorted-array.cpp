class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st(nums.begin(), nums.end());
        
        
        int k = 0;
        for (int x : st) {
            nums[k] = x; 
            k++;
        }
        
        return k; 
    }
};
