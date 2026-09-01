class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
         
             
         ListNode* current = head ;
        ListNode* previous = nullptr;
        ListNode* front = nullptr;
        while (current != nullptr){
            front = current->next;
            current->next = previous;
            previous = current;
            current = front;
            
        }head = previous;
        
        
        ListNode* maxval = head;
        ListNode* temp = head;
        while (temp!= nullptr){
            if (temp->val< maxval->val){
                
                ListNode* store = temp->next ;
                temp->next = nullptr;
                
                maxval->next = store;
                temp = store;
                
                
            }
            else{
                maxval = temp;
                temp= temp->next ;
            }
            
        }
        
        // Reverse again
        current = head ;
         previous = nullptr;
        front = nullptr;
        while (current != nullptr){
            front = current->next;
            current->next = previous;
            previous = current;
            current = front;
            
        }head = previous;
        
        
        return head;
    }
};
