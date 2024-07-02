bool compute(Node* head) {
        // Your code goes here
        string x;
        while(head){
            x+= head->data;
            head = head->next;
        }
        // cout << x << endl;
        int st = 0, end = x.size()-1;
        while(st<end){
            if(x[st]!=x[end]){
                return false;
            }
            st++;
            end--;
        }
        return true;
    }