Node* rotate(Node* head, int k)
    {
        
        struct Node *last = head;
        struct Node *temp = head;
        
        while(last->next!=NULL){
            last = last->next;
        }
        
        
        
        for(int i=0; i<k; i++){
            
            head = head->next;
            last->next = temp;
            temp->next = NULL;
            last = temp;
            temp = head;
            
        }
        
        return head;
    }