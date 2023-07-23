Node* segregate(Node *head) {
        
        // Add code here
        vector<int> v;
        Node* temp=head;
        while (temp!=nullptr){
            v.push_back(temp-> data);
            temp=temp->next;
        }
        
        sort(v.begin(),v.end());
        
        Node* newHead = new Node(-1);
        Node* temp2 = newHead;
        for (int i=0;i<v.size();i++){
            Node* n = new Node(v[i]);
            temp2-> next = n;
            temp2 = temp2-> next;
        }
        return newHead-> next;
    }