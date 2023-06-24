class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr){
        int pos=0;
        int neg=1;
        int n= arr.size();
        vector<int> ans(n,0);
        
        for(auto nums:arr){
            if(nums>0){
                ans[pos] = nums;
                pos=pos+2;
                
            }
            else if(nums<0){
                ans[neg]=nums;
                neg=neg+2;
            }
            
        }return ans;
      
        
    }
};