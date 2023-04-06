#include <bits/stdc++.h>

using namespace std;

struct node{
    int data;
    struct node *next;
};

struct node *create(int n){
    struct node *p, *q, *r;
    int item;
    cout << "Enter the head node data: " << endl;
    cin >> item;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = item;
    p->next = NULL;
    r = p;
    for(int i=1; i<n; i++){
        q = (struct node *)malloc(sizeof(struct node));
        cout << "Enter the next item: " << endl;
        cin >> item;
        q->data = item;
        q->next = NULL;
        r->next = q;
        r = r->next;
    }
    return p;
}

void displayll(struct node *head){
    struct node *q;
    q = head;
    while(q!=NULL){
        cout << q->data << " ";
        q = q->next;
    }
}

struct node *reverse(struct node **head){
    if ((*head) == NULL || (*head)->next == NULL)
            return (*head);
        // Recursive call
        node* rest = reverse(&((*head)->next));
        (*head)->next->next = (*head);
        
        (*head)->next = NULL;
        
        return rest;
    // return prev;
}

int main() {
    
    int n;
    cout << "Enter no. of ints: " << endl;
    cin >> n;
    
    struct node *head = create(n);
    // displayll(head);
    struct node *rev = reverse(&head);
    displayll(rev);

    return 0;
}