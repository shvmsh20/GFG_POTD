int countNodesinLoop(struct Node *head)
{
    int ans=0;
    if(!head->next||!head)
    return 0;
    Node* slow=head;
    Node* fast=head;
    
    do{
        slow=slow->next;
        fast=fast->next->next;
    }while(fast&&fast->next&&fast!=slow);
    
    if(slow!=fast)
    return 0;
    
    Node* temp=fast;
    fast=fast->next;
    
    while(temp!=fast){
        fast=fast->next;
        ans++;
    }
    return ans+1;
    
}