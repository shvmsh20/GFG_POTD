Node* sortedInsert(Node* head, int data) {
        // code here
        Node* prev = nullptr, *curr = head;
        while(data>(curr->data)){
            // cout << "kodhf" << endl;
            prev = curr;
            curr = curr->next;
            if(curr == head){
                break;
            }
        }
        // cout<< curr->data << endl;
        Node* newNode = new Node(data);
        if(prev && curr){
            prev->next = newNode;
            newNode->next = curr;
            return head;
        }else{
            
                Node* end = head;
                while(end->next!=head){
                    end = end->next;
                }
                end->next = newNode;
                newNode->next = head;
                return newNode;
           
        }