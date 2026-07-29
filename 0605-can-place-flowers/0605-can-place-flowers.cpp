class Solution {
public:
    bool canPlaceFlowers(vector<int>& arr, int n) {
        int ans = 0;
        int size = arr.size();
        
        for(int i = 0; i < size; i++) {
            if(arr[i] == 0) {
                // Check if the left plot is empty or if we are at the start
                bool l = (i == 0 || arr[i - 1] == 0);
                // Check if the right plot is empty or if we are at the end (fixed bug)
                bool r = (i == size - 1 || arr[i + 1] == 0);
                
                // Use logical AND (&&) for proper evaluation
                if(l && r) {
                    arr[i] = 1;
                    ans++;
                    
                    // Optimization: stop early if we already planted enough flowers
                    if (ans >= n) return true; 
                }
            }
        }
        return ans >= n;
    }
};
