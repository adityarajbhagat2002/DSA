class Solution {
public:
    vector<vector<int>> generate(int n) {
        if(n==1)return {{1}};
        
        if(n==2) return {{1},{1,1}};
        
        vector<vector<int>> ans;
        ans={{1},{1,1}};
        
        for(int i=2; i<n; i++){
            vector<int> temp(ans.back().size()+1);
            temp[0]=1;
            temp[temp.size()-1]=1;
            
            for(int j=1; j<temp.size()-1; j++){
                temp[j]= ans.back()[j-1]+ans.back()[j];
            }
            
            ans.push_back(temp);
            
        }
        return ans;
        
    }
};