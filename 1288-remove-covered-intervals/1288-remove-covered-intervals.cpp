class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
            if (a[0] == b[0]) {
                return a[1] > b[1];
            }
            return a[0] < b[0];
        });
        int counr = 0;
        int mx = 0;
        
        for (const auto& interval : intervals) {
            int end = interval[1];

            if (end > mx) {
                counr++;
                mx = end;
            }
        }
        
        return counr;
    }
    
};