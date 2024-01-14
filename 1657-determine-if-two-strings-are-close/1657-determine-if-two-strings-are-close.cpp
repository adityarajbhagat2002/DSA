class Solution {
public:    
    bool closeStrings(string word1, string word2) {
       vector<int> A(26,0),B(26,0),C(26,0),D(26,0);
        for(auto it : word1){
            A[it-'a']++;
            C[it-'a']=1;
        }
        
        for(auto it : word2){
            B[it-'a']++;
            D[it-'a']=1;
        }
        
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        
        return A==B && C==D;
        
        
        
    }
};