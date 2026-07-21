class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false ;
        }

        sort(s.begin() , s.end()) ;
        sort(t.begin() , t.end()) ; 

        first = 0 ; 
        second = 0 ;
    

        while ( true){
            if(s[first] == t[first]){
                first ++ ; 
                second ++ ; 
            }else{
                return false ; 
            }
        }

        
        
    }
    return true ; 
};



