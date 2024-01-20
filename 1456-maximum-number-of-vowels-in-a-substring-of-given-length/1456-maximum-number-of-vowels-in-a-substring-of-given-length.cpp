class Solution {
public:
    bool isvowel(char ch) { 
        return (ch == 'a') || (ch == 'e') ||(ch == 'i') ||(ch == 'o') ||(ch == 'u');
        }
                           
    int maxVowels(string s, int k) {
        int count=0;
        int ans=0;
        int i=0;
        for(;i<k;i++){
            if(isvowel(s[i])){
                count++;
            }
        }
        ans=count;
        
        for(i=k;i<s.size();i++){
            if(isvowel(s[i]))count++;
            if(isvowel(s[i-k]))count--;
            ans=max(ans,count);
        }
        return ans;
    }
};