class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int ,int > mp ; 
        // for (auto val : mp )
        //isme indexing ka need pad rha to hum for loop lagyegne 

        
        for (int i = 0 ; i< nums.size() ;i++){
            //does difference exist in map ? 

            if (mp.find((target - nums[i])) == mp.end()){
                mp[nums[i]] = i ;

            }else {
            return {nums[i] , i} ; 
            }


        }

        
    }
};
