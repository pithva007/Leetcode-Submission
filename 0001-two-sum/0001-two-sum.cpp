class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) 
    {   
        map<int,int> mp;
        for(int i = 0;i < v.size();i++)
        {
            int sum = target - v[i];
            if(mp.count(sum))return {mp[sum],i};
            mp[v[i]] = i;
        }
        return {};
    }
};