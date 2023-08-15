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
    ListNode* partition(ListNode* head, int x) {
        ListNode* curr = head;  // Pointer to traverse the original list                    
        ListNode* lessNode = new ListNode(0);    // Less node for nodes < x
        ListNode* lessTail = lessNode;           // Tail pointer for less list
        
        ListNode* greaterNode = new ListNode(0); // greaterNode for nodes >= x
        ListNode* greaterTail = greaterNode;     // Tail pointer for greater list
        
        // Traverse the original list
        while (curr != NULL) 
        {
            if (curr->val < x) 
            {
                //Append current node to the less list
                lessTail->next = new ListNode(curr->val);
                lessTail = lessTail->next; // Move the tail pointer
            } 
            else 
            {
                // Append current node to the greater list
                greaterTail->next = new ListNode(curr->val);
                greaterTail = greaterTail->next; // Move the tail pointer
            }
            curr = curr->next; // Move to the next node
        }    
        // Attach the greater list to the end of the less list
        lessTail->next = greaterNode->next;
        
        // Return the modified list starting from the first node after the less dummy node
        return lessNode->next;
    }
};