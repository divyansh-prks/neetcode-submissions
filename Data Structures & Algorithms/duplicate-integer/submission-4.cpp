class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {


        int m = nums.size() ; 
      

    //     sort(nums.begin() , nums.end()); 
    //        for (int i = 0 ; i < m; i++){
    //         for (int j = i+1 ; j<m  ; j++){
    //             if (nums[i] == nums[j] ){
    //                 return true ; 

    //             }
    //         }
    //        }

    //        return false ;
    // }

    map<int,int> mp ;
    for (int i = 0 ; i < n ; i++ ){
        if (mp.find(arr[i]) != mp.end()){
            mp[i] +=1 ; 

        }

        
    } 

    for ( auto it : mp ){
        if (mp.second > 1){
            return false;
        }

    }
    return true  ;


    
};