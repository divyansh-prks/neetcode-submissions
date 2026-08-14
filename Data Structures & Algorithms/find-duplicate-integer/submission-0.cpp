class Solution {
    // Node {
    //     int data ; 
    //     int *prev ; 
    //     int *next ; 
    // }
public:
    int findDuplicate(vector<int>& nums) {
        // node -> nextNode 
        int slow = 0 ; 
        int fast =  0 ; 

        while ( slow != fast){
            
            slow = slow->next ; 
            fast = fast->next->next ;
        }
        fast  = 0 ;  

    }
};




