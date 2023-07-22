class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> mpp;
        int n = nums.size();
        
        for(int  i =0; i <=n; i++){
            int a = nums[i];
            int moreNeeded = target- a;
            
            if(mpp.find(moreNeeded) != mpp.end()){
                return {mpp[moreNeeded] , i};
            }
            mpp[a] = i;
            
        }
        return {-1,-1};
        
        
    }
};