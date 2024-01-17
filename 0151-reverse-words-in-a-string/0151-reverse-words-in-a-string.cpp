class Solution {
public:
    string reverseWords(string s) {
        
        string temp;
        vector<string> ans;
        
        
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                if(temp!=""){
                    ans.push_back(temp);
                    temp.clear();
                    
                }
            }else{
                temp+=s[i];
                
            }
            
            
        }
        if(temp!="")ans.push_back(temp);
        s.clear();
        for(int i=ans.size()-1;i>=0;i--){
            s+=ans[i]+" ";
        }
        s.pop_back();
        return s;
        
    }
};