// my solution 

class Solution {
public:
    int findMin(vector<int> &nums) {
        
        int l = 0 ;  
        int r = nums.size() -1 ;

        int minm  = INT_MAX;
        while(l< r){



            int mid = l + (r-l) / 2; 
             minm = min( minm ,nums[mid]);
            

            if (nums[mid] > nums[l] ){
                l = mid + 1;
            }else{
               
                r = mid -1 ;
            }

        } 

        return minm ; 


    }
};
