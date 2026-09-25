
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* temp = head;
        ListNode *prev= nullptr;
        while (temp!= nullptr){
            temp= temp->next;
            count++;
        }
       int towalk = count - n;
      temp= head;
      if (towalk==0){
          head= head->next;
          temp->next = nullptr;
          delete temp;
          return head;
      }
       
       while (towalk){
           prev= temp;
           temp= temp->next;
           towalk--;
       }
       if (prev!=nullptr){
           prev ->next= temp->next;
           }
       temp->next = nullptr;
       delete temp;
       return head;
       
        
        
    }
};

