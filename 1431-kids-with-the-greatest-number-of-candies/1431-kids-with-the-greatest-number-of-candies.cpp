class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& arr, int extraCandies) {
        
        vector<bool> ans;
        int n=arr.size();
        int maxElement=*max_element(arr.begin(),arr.end());
        
        
        for(int i=0;i<n;i++){
           int temp=arr[i]+extraCandies;
            
            if(temp>=maxElement){
                ans.push_back(true);
            }else{
                ans.push_back(false);
                
            } 
        }
    
    return ans;
    
    
    }
};