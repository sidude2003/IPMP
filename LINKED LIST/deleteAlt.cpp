void deleteAlt(struct Node *head){
    
    if(head==NULL){
        return;
    }
    
    struct Node *temp = head;
    struct Node *temp2 = head->next;
    
    while(temp!=NULL && temp2!=NULL){
        temp->next = temp2->next;
        delete(temp2);
        temp = temp->next;
        if(temp->next!=NULL){
            temp2=temp->next;
        }
    }
    
}