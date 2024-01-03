class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,vector<int>> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]].push_back(i);
        }
        for(auto i:m)
        {
            if(i.second.size()>1)
            {
                for(int j=1;j<i.second.size();j++)
                {
                    if((i.second[j]-i.second[j-1])<=k)
                        return true;
                }
            }
        }
        return false;
    }
};