struct node *reverse (struct node *head, int k)
    { 
        struct node *current = head;
        struct node *prev = NULL;
        struct node *next = NULL;
        int count = 0;
        
        if(!head){
            return NULL;
        }
        
        while(current!=NULL && count<k){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
            count++;
        }
        
        if(next!=NULL){
            head->next = reverse(next, k);
        }
        
        
        return prev;
        
    }