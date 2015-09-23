// problem statement: https://leetcode.com/problems/remove-nth-node-from-end-of-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    
    int i= 0;
    int noOfNodes = 0;
    struct ListNode* front = head;
    struct ListNode* rear = head;
    struct ListNode* temp = head;
    
    while(temp != NULL){
        
        temp = temp->next;
        noOfNodes++; 
    }
    
    if(n>noOfNodes)
        exit(0);
    
    if(head == NULL)
        exit(0);
    
    if(head->next == NULL){
    
        free(head);
        head = NULL;
        return head;
    }
    
     if(n == noOfNodes){
        
        temp = head;
        head = head->next;
        free(temp);
        return head;
     }
    
        
    temp = NULL; 
    
    while(i<n){
        
        front = front->next;
        i++;
    }
    
    while(front->next != NULL){
        
        front = front->next;
        rear = rear->next;
    }
    
    temp = rear->next;
    rear->next = rear->next->next;
    
    free(temp);
    return head;   
    
    
}