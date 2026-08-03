class Solution {
public:
    bool isPalindrome(string s) {
        int n  = s.size() ; 
        int left = 0 ; 
        int right = n-1 ; 

        while (left < right){

            while (!isalnum(s[left])){
                left++;

            }
            while (!isalnum(s[right])){
                right-- ; 

            }
            if (left == right || left > right){
                break ; 
            }
            if(tolower(s[left]) == tolower(s[right])){
                left ++ ; 
                right -- ; 
            }else {
                return false ; 
            }
            
        }
        return true ; 
    }
};
