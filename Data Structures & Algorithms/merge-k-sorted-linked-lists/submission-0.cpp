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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        // Min heap: {node value, node pointer}
        priority_queue<
            pair<int, ListNode*>,
            vector<pair<int, ListNode*>>,
            greater<pair<int, ListNode*>>
        > pq;

        // Put first node of every list into heap
        for (int i = 0; i < lists.size(); i++) {
            if (lists[i] != nullptr) {
                pq.push({lists[i]->val, lists[i]});
            }
        }

        // Dummy node
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;

        while (!pq.empty()) {
            
            // Get smallest node
            auto [value, node] = pq.top();
            pq.pop();

            // Attach it to answer
            temp->next = node;
            temp = temp->next;

            // Add next node from the same list
            if (node->next != nullptr) {
                pq.push({node->next->val, node->next});
            }
        }

        return dummy->next;
    }
};