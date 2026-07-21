class Solution {
public:
    bool isAnagram(string s, string t) {
        // s racecar   , t carrace
        if(s.size() != t.size()){
            return false ;
        }

        sort(s.begin() , s.end()) ;
        // aaccerr
        sort(t.begin() , t.end()) ;
        // aaccerr 

        int first = 0 ;  //0
        int second = 0 ; //0
    

        while ( true){ // going infinity 
            if(s[first] == t[second]){ // a == a ? 
                first ++ ; 
                second ++ ; 
            }else{
                return false ; 
            }
        }

        
    return true ; 
        
    }
};



