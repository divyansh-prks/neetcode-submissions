class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {


        int m = nums.size() ; 
      

        sort(nums.begin() , nums.end()); 
           for (int i = 0 ; i < m; i++){
            for (int j = i+1 ; j<  ; j++){
                if (nums[i] == nums[j] ){
                    return true ; 

                }
            }
           }

           return false ;
    }
};