class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tot = 0;
        int left = 0;
        int ans = 0;
        for(int i = 0;i < gas.size();i++)
        {
            tot += gas[i] - cost[i];
            left += gas[i] - cost[i];
            if(left < 0)
            {
                ans = i + 1;
                left = 0;
            }
        }
        if(tot >= 0)return ans;
        else return -1;
    }
};