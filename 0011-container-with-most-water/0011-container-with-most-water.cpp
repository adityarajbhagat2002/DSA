class Solution {
public:
    int maxArea(vector<int>& height) {
        int start=0;
        int end=height.size()-1;
        
        int ans=0;
        int temp;
        
        while(start<end){
            if(height[start]<=height[end]){
                temp=height[start]*(end-start);
                start++;
                
            }else{
                temp=height[end]*(end-start);
                end--;
            }
            ans=max(ans,temp);
            
        }
        return ans;
        
    }
};