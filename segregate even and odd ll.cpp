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



    ListNode* oddEvenList(ListNode* head) {
        ListNode * temp = head;
        ListNode * dummyodd = new ListNode(-1);
        ListNode* oddd = dummyodd;
      
        ListNode* dummyeven= new ListNode(-1);
          ListNode* evenn= dummyeven;
          if ( head==nullptr){
              return head;
          }
       
       
          
        while(temp!= nullptr){
            if (temp->val%2==0){
                evenn->next= temp;
                evenn= evenn->next;
                
      
            }else{
                oddd->next= temp;
                oddd= oddd->next;
            }temp= temp->next;
            
        }
        evenn-> next = nullptr;
        
        if (head->val%2==0){
            evenn->next= dummyodd->next;
             head = dummyeven->next;
            
        }else{
            
        oddd->next = dummyeven->next;
         head = dummyodd->next;
        }
        
        
       
        return head;
        
        
    }
};