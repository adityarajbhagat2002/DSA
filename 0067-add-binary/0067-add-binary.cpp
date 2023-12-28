class Solution {
public:
    string addBinary(string a, string b) {
        int carry=0;
        int m=a.length()-1;
        int n=b.length()-1;
        string ans="";
        
        
        while(m>=0 || n>=0 || carry>0){
            
            if(m>=0){
                carry+= a[m]- '0';
                m--;
                
            }
            
              if(n>=0){
                carry+= b[n]- '0';
                n--;
                
            }
            
            ans+= carry%2+'0';
            carry=carry>>1;
            
            
            
            
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
        
        
        
    }
};