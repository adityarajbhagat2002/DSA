class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int temp=1;
        int zero=0;
        int index;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                temp=temp*nums[i];
            }else{
                zero++;
                index=i;
            }
            
        }
        
        
        if(zero>1){
            return vector<int>(nums.size(),0);
        }
        
        
        if(zero==1){
            vector<int> ans(nums.size(),0);
            ans[index]=temp;
            return ans;
        }
        
        
        for(int i=0;i<nums.size();i++){
            nums[i]=temp/nums[i];
            
        }
        
        return nums;
        
        
        
        
    }
};