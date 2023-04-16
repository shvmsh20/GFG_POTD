void moveZeroes(struct Node **head)
{
   
    if(*head==NULL) return;
    Node *temp = (*head)->next, *prev=*head;
    while(temp!=NULL){
        if(temp->data==0){
            Node *curr = temp;
            temp= temp->next;
            curr->next = *head;
            *head = curr;
            prev->next = temp;
        }else{
            prev = temp;
            temp = temp->next;
        }
    }
}