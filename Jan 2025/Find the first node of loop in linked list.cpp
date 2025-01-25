Node* findFirstNode(Node* head) {
        // your code here
         struct Node* slow = head, *fast = head;
        bool found = false;
        while (fast && fast -> next) {
            slow = slow -> next;
            fast = fast -> next -> next;
            
            if (slow == fast) {
                found = true;
                break;
            }
        }
        
        if (found == false) return NULL;
        
        slow = head;
        
        while (slow != fast) {
            slow = slow -> next;
            fast = fast -> next;
        }
        
        return fast;
    }