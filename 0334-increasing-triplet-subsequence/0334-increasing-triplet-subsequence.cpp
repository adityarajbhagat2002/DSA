class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
       vector<int>p(nums.size()),s(nums.size());
        
        p[0]=nums[0];
        s.back()=nums.back();
        
        for(int i=1;i<p.size();i++){
            p[i]=min(nums[i],p[i-1]);
           
            
        }
        
        for(int i=s.size()-2;i>=0;i--){
            s[i]=max(nums[i],s[i+1]);
            
        }
        
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]>p[i-1] && nums[i]<s[i+1])
                return true;
            
        }
        return false;
    }
    
};