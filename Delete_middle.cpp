class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        if(fast->next == NULL){
            return NULL;
        }

        while(fast->next->next != NULL && fast->next->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        slow->next = slow->next->next;
        return head;
    }
};