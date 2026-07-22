class Solution {
    //dekhke likh rha hu 
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string , vector<string>> res ; 
        for (int i = 0 ; i < strs.size(); i++){
            string sorted = strs[i]  ;
            sort(sorted.begin()  , sorted.end()) ;
            res.push_back(strs[i] , sorted);

        }
        vector<string> result ; 

        for(auto &el : res){
            result.push_back(el.first) ; 
            
        }
        return result ; 

        
    }
};
