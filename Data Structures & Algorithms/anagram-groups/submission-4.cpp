class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string , vector<string> > mp ; 
        for (auto &el : strs){
            string sorted = el ; 
            sort(sorted.begin() , sorted.end()); 
            mp[sorted] = el ; 
        }

        vector<vector<string>> final ; 
        for (auto&el :mp) {
            final.push_back(el.second); 
        }
        return final ;
    }
};
