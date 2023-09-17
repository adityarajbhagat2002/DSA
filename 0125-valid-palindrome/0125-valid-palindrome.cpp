class Solution {
public:
    bool isPalindrome(string s) {
        string ans="";
        
        for(int i=0; i<s.size(); i++){
            if(isalnum(s[i]))
            {
                ans.push_back(tolower(s[i]));  
            }
        }
        
        
        int start=0,end=ans.size()-1;
        cout<<ans;
        
        while(start<=end)
        {
            if(ans[start]!=ans[end])
            {
                return false;
            }else{
                start++;
                end--;
            }
        }
        return true;
        
        
    }
};