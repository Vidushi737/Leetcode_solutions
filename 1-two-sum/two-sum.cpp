class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> mp;
        int ok=0;
        for(int i=0;i<nums.size();i++)
        {
            ok=target-nums[i];
            if(mp.find(ok)!=mp.end())
            {
                return {mp[ok],i};
            }
            mp[nums[i]]=i;
            
        }
        return {};
    }
};