class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n = palindrome.size(), i = 0;
        if(n == 1)
            return "";
        if(n & 1){
            for(i = 0; i < n; i++){
                if(i == n/2)
                    continue;
                if(palindrome[i] != 'a'){
                    palindrome[i] = 'a';
                    break;
                }
            }
            if(i == n)
                palindrome[n-1] = 'b';
        }
        else{
            for(i = 0; i < n; i++){
                if(palindrome[i] != 'a'){
                    palindrome[i] = 'a';
                    break;
                }
            }
            if(i == n)
                palindrome[n-1] = 'b';
        }
        return palindrome;
        
    }
};