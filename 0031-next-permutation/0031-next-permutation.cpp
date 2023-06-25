class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int index=0;
        int i;
        for(i=n-2; i>=0 ; i--){
            if(nums[i]>=nums[i+1]){
                continue;
                
            }
            else{
                index=i;
                break;
            }
        }
        
        if(i==-1){
            sort(nums.begin(),nums.end());
            return ;
        }
        
        
    
        
        int a=0;
        for(int i=index+1 ; i<n; i++){
            if(nums[i]> nums[index]){
                a=i;
            }
            else{break;}
        }
        
        swap (nums[index], nums[a]);
        sort(nums.begin()+index+1 ,nums.end());
    }
};