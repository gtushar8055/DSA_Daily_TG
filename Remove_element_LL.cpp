// Day12 --> 16/06/2025
// Remove elements from Linkedlist --> LC

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* jai = new ListNode();
        jai->next = head;
        ListNode* mahakaal = jai;
        while(mahakaal->next){
            if(mahakaal->next->val == val){
                mahakaal->next = mahakaal->next->next;
            } else{
                mahakaal = mahakaal->next;
            }
        }
        return jai->next;
    }
};