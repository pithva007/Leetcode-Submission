class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int target) 
    {
        int row = v.size();
        int col = v[0].size();
        int l = 0,r = row * col - 1;
        while(l <= r){
            int mid = l + (r - l) / 2;
            int midval = v[mid / col][mid % col];
            if(midval == target)return true;
            if(midval < target) l = mid + 1;
            else r = mid - 1; 
        }
        return false;
    }
};
