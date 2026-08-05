// doing from apna college

class Solution {
public:

    bool check(int freq1[] , int freq2[]){

        for (int i = 0  ; i < 26 ; i++){
            if (freq1[i] != freq2[i]){
                return false ;
            }
        }
        return true ; 
    }
    bool checkInclusion(string s1, string s2) {
        int windowLength = s1.size()  ; 

        int freq[26] = {0}; 

        for (int i = 0 ; i < s1.size() ; i++){
            freq[s1[i] - 'a']++ ; 
        }

        for (int i = 0 ; i < s2.size() ; i++){
            int windowFreq[26] = {0}; 
            int windowIndex = 0 ; 
            int s2Index = i ; 

            while (windowIndex < windowLength && s2Index < s2.size()){
                windowFreq[s2[s2Index] - 'a']++;
                windowIndex++ ; 
                s2Index++ ;

            }
               if(check(windowFreq , freq) ==true){
                return true ;
               }
        }
        return false ; 
        
    }
};
