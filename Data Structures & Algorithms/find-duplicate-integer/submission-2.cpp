class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        //ok let's write it without seeing  . 

        int slow  = 0 ; 
        int fast = 0 ; 

                  
//  nums = [1,2,3,2,2]
            // 0 1 2 3 4
            //       f
        while (true){
            int slow = nums[slow] ; //3
            int fast = nums[nums[fast]] ;// 2  

            if (slow == fast){
                break ;
            }
        }

        int slow =0 ; 

                         
//  nums = [1,2,3,2,2]
            // 0 1 2 3 4
            //       f

        while (true){
            int slow = nums[slow] ;  //3
            int fast = nums[fast];  //2

            if (slow == fast){
                return slow ;
            }
        }
    }
};



//can't able to dry run this . 
