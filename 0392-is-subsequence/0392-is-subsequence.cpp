class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int a=0;
        int b=0;
        int n=s.size();
        
        while(a<t.size()&&b<s.size()&&n>=0){
            
            if(s[b]==t[a]){
                b++,n--;
            }           
            a++;
        }
        return n==0;
        
        
        
    }
};