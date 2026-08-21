class Solution {
public:
   long long countLessEqual(long long mid, int m, int n) {
        long long count = 0;
        for (int i = 1; i <= m; ++i) {
            count += std::min((long long)n, mid / i);
        }
        return count;
    }
    
    int findKthNumber(int m, int n, int k) {
        if (m > n) {
            std::swap(m, n);
        }

        long long low = 1;
        long long high = (long long)m * n;
        
        while (low < high) {
            long long mid = low + (high - low) / 2;
            
            if (countLessEqual(mid, m, n) >= k) {
                high = mid; 
            } else {
                low = mid + 1; 
            }
        }
        
        return low;
    }
};
