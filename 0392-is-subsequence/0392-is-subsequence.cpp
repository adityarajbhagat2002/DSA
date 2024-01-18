class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int a=0;
        int b=0;
        int n=s.size();
        
        while(b<t.size()&&a<s.size()&&n>=0){
            
            if(s[a]==t[b]){
            a++,n--;
            }
            b++;
        }
        return n==0;
        
        
        
    }
};