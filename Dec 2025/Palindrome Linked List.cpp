Node* reverse(Node* node){
        Node* curr = node, *prev = nullptr;
        while(curr){
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    bool isPalindrome(Node *head) {
        // Your code here
        Node *slow = head, *fast = head;
        while(fast->next && fast->next->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        slow->next = reverse(slow->next);
        Node* c1 = head, *c2 = slow->next;
        while(c1 && c2){
            if(c1->data!=c2->data){
                return false;
            }
            c1 = c1->next;
            c2 = c2->next;
        }
        return true;
    }