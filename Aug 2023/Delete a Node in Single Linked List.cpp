Node* deleteNode(Node *head,int x)
{
    //Your code here
    Node* dummy = new Node(0);
    Node* curr = dummy;
    dummy->next = head;
    for(int i=1; i<x; i++){
        curr = curr->next;
    }
    curr->next = curr->next->next;
    return dummy->next;
}
