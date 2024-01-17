class Solution {
public:
    int compress(vector<char>& chars) {
        
        string s;
        int count=1;
    
        for(int i=1;i<chars.size();i++){
            if(chars[i-1]==chars[i])count++;
            else {
                if(count==1){
                    s+=chars[i-1];
                }else{
                    s+=chars[i-1]+to_string(count);
                }
                count =1;
                
            }
        }
        
         if(count==1){
                    s+=chars.back();
                }else{
                    s+=chars.back()+to_string(count);
                }
             
    for(int i=0;i<s.size();i++){
        chars[i]=s[i];
        
    }
        
        return s.size();
            
        
    }
};