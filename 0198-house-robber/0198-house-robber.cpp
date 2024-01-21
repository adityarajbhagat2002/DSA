class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        int prev1=nums[0];
        int prev2=0;

        for(int i = 1 ; i<n; i++ ){
            int pick;
            if(i>1){
              pick = nums[i] + prev2;
            }
            else
             pick = nums[i] + 0 ;

             int notpick = 0 + prev1;

            
             int curr= max(pick , notpick);
             prev2=prev1;
             prev1=curr;


        
        }
        return prev1;
    


    }
};