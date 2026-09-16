class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* temp ;
        temp= head;
        
       // Step 1 -> Creating copy Nodes in between 
       
       
        while (temp!= nullptr){
            Node* copyNode = new Node(temp->val);
            
            copyNode->next= temp->next;
            temp->next = copyNode;
            temp= temp->next->next ;
        
      
        }
        
        
        //Step 2 -> Connect random  pointers 
        
        
        temp= head;
        
        while (temp!= nullptr){
              Node* copyNode = temp->next;
         
            if (temp->random != nullptr){
            copyNode->random = temp->random->next;
            }else{
                copyNode->random = nullptr;
            }
            temp = temp->next->next;
        }
        
      //  Step3-> Seprate the copy list from original list 
        
        temp = head;
        
        Node* dummyNode = new Node(-1);
        Node* res = dummyNode;
        
        
        while (temp!= nullptr){
            
            res->next = temp->next;
            temp->next = temp->next ->next;
            
            res = res->next;
            temp= temp->next;
        }
        Node*  newhead;
        newhead = dummyNode->next;
        delete dummyNode;
        return newhead;
        
    }
};
