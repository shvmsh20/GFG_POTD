Node* removeAllDuplicates(struct Node* head) {
        // code here
        Node* curr = head, *newHead = nullptr, *prev = nullptr;
        unordered_map<int, int> mp; 
        while(curr){
            mp[curr->data]++;
            curr = curr->next;
        }
        curr = head;
        while(curr){
            if(mp[curr->data]!=1){
                Node* toDelete = curr;
                curr = curr->next;
                if(prev){
                    prev->next = curr;
                }
                delete toDelete;
            }else{
                if(!newHead){
                   newHead = curr; 
                }
                prev = curr;
                curr = curr->next;
            }
        }
        return newHead;
    }