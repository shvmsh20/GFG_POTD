Node* vectorToLinkedList(const std::vector<int>& vec) {
    Node* head = nullptr;
    Node* tail = nullptr;

    for (int num : vec) {
        Node* newNode = new Node(num);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    return head;
}
    struct Node* modifyTheList(struct Node *head)
    {
       vector<int> v;
       while(head!=NULL)
       {
           v.push_back(head->data);
           head=head->next;
       }
       int c =v.size()/2;
       reverse(v.begin(),v.end());
       for(int i=0;i<c;i++)
       {
           v[i]=v[i]-v[v.size()-i-1];
       }
       Node *nhead=vectorToLinkedList(v);
       return nhead;
    }