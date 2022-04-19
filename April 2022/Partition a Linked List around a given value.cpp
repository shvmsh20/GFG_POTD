struct Node* partition(struct Node* head, int x) {
    // code here
    queue<Node*> after,before,equal;
    Node* trav=head,*prev=NULL;
    
    while(trav){
        if(trav->data>x){
            after.push(trav);
        }
        else if(trav->data<x){
            before.push(trav);
        }
        else equal.push(trav);
        trav=trav->next;
    }
    trav=NULL;
    head=NULL;
    while(!before.empty()){
        // cout<<before.front()->data<<" ";
        if(head==NULL){
            head=before.front();
            trav=head;
        }
        else{
            trav->next = before.front();
            trav=trav->next;
        }
        before.pop();
    }
    while(!equal.empty()){
        // cout<<before.front()->data<<" ";
        if(head==NULL){
            head=equal.front();
            trav=head;
        }
        else{
            trav->next = equal.front();
            trav=trav->next;
        }
        equal.pop();
    }
    while(!after.empty()){
        // cout<<after.front()->data<<" ";
        if(head==NULL){
            head=after.front();
            trav=head;
        }
        else{
            trav->next = after.front();
            trav=trav->next;
        }
        after.pop();
    }
    trav->next=NULL;
    return head;
}