int getMiddle(Node *head)
    {
        int count = 0;
        
        struct Node *temp = head;
        
        while(temp!=NULL){
            temp = temp->next;
            count++;
        }
        
        int m = count/2;
        
        temp = head;
        
        for(int i=0; i<m; i++){
            temp = temp->next;
        }
        
        int ans = temp->data;
        
        return ans;
    }