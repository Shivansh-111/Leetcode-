class Solution {
public:
    void deleteNode(ListNode* node) {
        //copy the value 
        
        int copy;
        ListNode* nextNode= node->next;
        ListNode* third= nextNode->next;
        
        // paste into the given node 
        
        copy= nextNode->val;
        node->val= copy;
        // update pointer and delete nextNode 
        
        node->next = third;
        nextNode->next = nullptr;
        delete nextNode;
       
        
        
    
    }
}; NJ
