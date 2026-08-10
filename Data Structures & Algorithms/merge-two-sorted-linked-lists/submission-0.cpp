/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *dummy ; 

        ListNode *l1 = list1; 
        ListNode *l2 = list2 ; 

        while (l1 != NULL || l2 != NULL){
            if (l1->val > l2->val){
                dummy->next = l1 ; 
                l1++; 
            }else if (l2->val > l1->val){
                dummy->next = l2 ; 
                l2++ ;
            }else {
                dummy->next = l1 ; 
                dummy->next = l2 ; 
                l1++; 
                l2++
            }
        }

        return dummy->next ; 
    }
};
