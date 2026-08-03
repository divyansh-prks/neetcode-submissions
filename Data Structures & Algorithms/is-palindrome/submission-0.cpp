class Solution {
public:
    bool isPalindrome(string s) {
        int n  = s.size() ; 
        int left = 0 ; 
        int right = n-1 ; 

        while (left < right){

            if (!isalnum(s[left])){
                left++;

            }
            if (!isalnum(s[right])){
                right-- ; 

            }
            if (left == right || left > right){
                break ; 
            }
            if(s[left] == s[right]){
                left ++ ; 
                right -- ; 
            }else {
                return false ; 
            }
            
        }
        return true ; 
    }
};
