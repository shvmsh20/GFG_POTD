int len(Node* head){
        Node* tmp = head;
        int cnt = 0;
        while(tmp){
            tmp = tmp->next;
            cnt++;
        }
        return cnt;
    }
    int getNthFromLast(Node *head, int n)
    {
        int leng = len(head);
        if(leng < n || head == NULL){
            return -1;
        }
        if(leng == n){
            return head->data;
        }
        int k = leng - n;
        Node* tmp = head;
        while(k){
            // q.push(tmp->data);
            k--;
            tmp = tmp->next;
        }
        return tmp->data;
           // Your code here
    }