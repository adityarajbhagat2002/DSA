class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.size();
        int mid= n/2;
        int count1=0;
        int count2=0;
        vector<char> v{'a','e','i','o','u' ,'A','E', 'I','O','U'};
        
        
        for(int i=0; i<mid;i++){
            if(find(v.begin(),v.end(),s[i])!=v.end())count1++;
            
           }
        
        for(int i=mid;i<n;i++){
             if(find(v.begin(),v.end(),s[i])!=v.end())count2++;
            
        }
        return count1==count2;
        
        
    }
};