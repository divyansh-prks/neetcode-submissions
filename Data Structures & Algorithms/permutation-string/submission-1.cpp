class Solution {
public:
    bool check(int freq1[] , int freq2[]){
        for (int i =0 ; i < 26 ; i++){
            if (freq1[i]  != freq2[i]){
                return false ;
            }
        }
        return true ; 
    }
    bool checkInclusion(string s1, string s2) {
        
        int freq[26] = {0} ; 
        for (int i = 0 ; i < s1.size() ; i++){
            freq[s1[i] - 'a']++ ; 
        }
        int windowSize = s1.size() ; 

        for (int i= 0 ; i < s2.size() ; i++){
            int winIdx = 0  , idx = i ; 
            int secondFreq[26] = {0} ; 
            while (winIdx < windowSize && idx < s2.size()){
                secondFreq[s2[idx] - 'a']++ ; 
                winIdx++ ; 
                idx++;
            }

            if (check(freq , secondFreq)){
                return true ;
            }
        }
        return false ;
    }
};
