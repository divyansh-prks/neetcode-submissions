class Solution {
    //dekhke likh rha hu 
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map <string , vector<string> > res ; 
        for (auto &s : strs){
            string sorted = s ; 
            sort(sorted.begin() , sorted.end()) ; 
            res[sorted].push_back(s) ; 
        }
        
        vector<string> finalAnswer ; 
        for (auto &s : res){
            finalAnswer.push_back(s.second);


        }
        return  finalAnswer;

        
    }
};
