
class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == nullptr)
            return nullptr;

        Node* curr = head;

        // Interleave cloned nodes in between original nodes
        // For each original node, insert its clone right after it
        // Original: A -> B -> C
        // Becomes:  An -> A' -> B -> B' -> C -> C'

        while (curr != nullptr) {
            Node* newNode = new Node(curr->val);
            newNode->next = curr->next;
            curr->next = newNode;
            curr = newNode->next;
        }

        // Assign random pointers to cloned nodes
        curr = head;
        while (curr != nullptr) {
            if (curr->random) {

                curr->next->random = curr->random->next;
            }
            curr = curr->next->next;
        }

        // Separate cloned list from original and restore original list
        curr = head;
        Node* cloneHead = curr->next;
        Node* cloneCurr = cloneHead;

        while (curr != nullptr) {
            curr->next = cloneCurr->next;

            // Make sure not to access cloneCurr->next if it's null
            cloneCurr->next = (curr->next) ? curr->next->next : nullptr;

            // Move both pointers forward
            curr = curr->next;
            cloneCurr = cloneCurr->next;
        }

        return cloneHead;
    }
};