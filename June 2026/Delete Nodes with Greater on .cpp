Node* reverse(Node* head){
        if(!head->next){
            return head;
        }
        Node* curr = head, *prev = nullptr;
        while(curr){
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    Node *compute(Node *head) {
        // code here
        if(!head->next){
            return nullptr;
        }
        Node *reverseHead = reverse(head);
        Node *currNode = reverseHead->next, *prev = reverseHead;
        prev->next = nullptr;
        while(currNode){
            if(currNode->data>=prev->data){
                prev->next = currNode;
                prev = currNode;
                currNode = currNode->next;
                prev->next = nullptr;
            }else{
                currNode = currNode->next;
            }
        }
        return reverse(reverseHead);
    }