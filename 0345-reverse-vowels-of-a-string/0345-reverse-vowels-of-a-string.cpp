class Solution {
public:
    string reverseVowels(string s) {
        string word=s;
        int start=0;
        int end=s.length()-1;
        
        string vowels="aeiouAEIOU";
        
        while(start<end){
            
            
            while(start<end && vowels.find(word[start])==-1){
                start++;
            }
            
            while(start<end && vowels.find(word[end])==-1){
                end--;
            }
            swap(word[start] , word[end]);
            start++;
            end--;
            
            
        }
        return word;
        
    }
};