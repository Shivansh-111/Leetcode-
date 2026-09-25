class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * fast = head;
        
        ListNode * slow = head;
        for (int i = 0 ; i <n; i++){
            fast = fast ->next;
           }if (fast == nullptr){
               head = head->next;
               slow->next = nullptr;
               delete slow;
               return head;
           
           
           }
           while (fast ->next != nullptr){
               slow = slow ->next;
               fast = fast ->next;
           }
           
           ListNode* deleteNode = slow->next;
           if (slow->next){
           slow->next = slow ->next->next;
           }
           deleteNode->next = nullptr;
           delete deleteNode;
           
        return head;
}
};
