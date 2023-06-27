struct Node* makeUnion(struct Node* head1, struct Node* head2)
    {
        // code here
        set<int> s;
        while(head1){
            s.insert(head1->data);
            head1 = head1->next;
        }
        while(head2){
            s.insert(head2->data);
            head2= head2->next;
        }
        if(s.size()==0){
            return nullptr;
        }
        Node* dummy = new Node(0);
        Node* start = dummy;
        for(auto x: s){
            //cout << x  << " ";
            dummy->next = new Node(x);
            dummy = dummy->next;
        }
        return start->next;
    }