Node*split(Node*head){
        if(!head){
            return head;
        }
        Node*fast = head;Node*slow = head;
        while(fast){
            fast = fast->next;
            if(!fast){
                return slow;
            }
            else{
                fast = fast->next;
            }
            slow = slow->next;
        }
        return slow;
    }
    Node*merge(Node*h1,Node*h2){
        if(!h1||!h2){
            return nullptr;
        }
        Node*head = nullptr;
        Node*tail = nullptr;
        while(h1 and h2){
            if(!head){
                if(h1->data < h2->data){
                    head = h1;
                    tail = h1;
                    h1 = h1->next;
                    head->next = nullptr;
                    head->prev = nullptr;
                }
                else{
                    head = h2;
                    tail = h2;
                    h2 = h2->next;
                    head->next = nullptr;
                    head->prev = nullptr;
                }
            }
            else{
                if(h1->data < h2->data){
                    tail->next = h1;
                    h1->prev = tail;
                    tail = h1;
                    h1 = h1->next;
                    tail->next = nullptr;
                }
                else{
                    tail->next = h2;
                    h2->prev = tail;
                    tail = h2;
                    h2 = h2->next;
                    tail->next = nullptr;
                }
            }
        }
        while(h1){
            if(!head){
                head = h1;
                tail = h1;
                h1 = h1->next;
                head->next = nullptr;
                head->prev = nullptr;
            }
            else{
                tail->next = h1;
                h1->prev = tail;
                tail = h1;
                h1 = h1->next;
                tail->next = nullptr;
            }
        }
        while(h2){
            if(!head){
                head = h2;
                tail = h2;
                h2 = h2->next;
                head->next = nullptr;
                head->prev = nullptr;
            }
            else{
                tail->next = h2;
                h2->prev = tail;
                tail = h2;
                h2 = h2->next;
                tail->next = nullptr;
            }
        }
        return head;
    }
    struct Node *sortDoubly(struct Node *head) {
        if(!head || !head->next)return head;
        Node * mid = split(head); 
        if(mid and mid->prev){
            mid->prev->next = nullptr;
        }
        if(mid){
            mid->prev=nullptr;
        }
        if(head == mid){
            mid = mid->next;
        }
        Node * h1 = sortDoubly(head);
        Node * h2 = sortDoubly(mid);
        Node * x = merge(h1,h2);
        return x;
    }