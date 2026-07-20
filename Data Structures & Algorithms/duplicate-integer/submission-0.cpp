class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {


        int m = nums.size() ; 
        int n = nums[0].size() ; 

        sort(nums.begin() , nums.end()); 
           for (int i = 0 ; i < m; i++){
            for (int j = 0 ; j< n ; j++){
                if (nums[i] == nums[i+1] ){
                    return true ; 

                }
            }
           }

           return false ;
    }
};