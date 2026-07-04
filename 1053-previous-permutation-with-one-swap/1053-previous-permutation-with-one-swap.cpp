class Solution {
public:
    vector<int> prevPermOpt1(vector<int>& arr) {
        int n = arr.size();
        int i = n - 2;
        
        // Find the rightmost dip (arr[i] > arr[i+1])
        while (i >= 0 && arr[i] <= arr[i + 1]) {
            i--;
        }
        
        // If no such element is found, it's already the smallest permutation
        if (i < 0) {
            return arr;
        }
        
        // Find the largest element smaller than arr[i] to its right
        int j = n - 1;
        while (arr[j] >= arr[i]) {
            j--;
        }
        
        // Handle duplicates. Move left to pick the first occurrence.
        while (j > 0 && arr[j] == arr[j - 1]) {
            j--;
        }
        
        // Swap exactly once and return
        swap(arr[i], arr[j]);
        return arr;
    }
};
