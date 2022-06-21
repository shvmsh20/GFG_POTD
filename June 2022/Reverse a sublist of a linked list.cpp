Node* reverseBetween(Node* head, int m, int n)
    {
        //code here
        unordered_map<int,Node*>mp;
        int i=1;
        while(head)
        {
            mp[i++]=head;
            head=head->next;
        }
        while(m<n){
            swap(mp[m++]->data,mp[n--]->data);
    }
        return mp[1];
    }


    Node* reverseBetween(Node* head, int m, int n)
    {
        //code here
        Node* orgPrev, *curr = head, *prev = NULL, *orgCurr, *next;
        int pos=1;
        while(pos<m){
            prev = curr;
            curr = curr->next;
            pos++;
        }
        orgPrev = prev;
        orgCurr = curr;
        prev = curr;
        curr = curr->next;
        pos++;
        while(pos<=n && curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            pos++;
        }
        orgCurr->next = curr;
        if(orgPrev){
            orgPrev->next = prev;
            return head;
        }else{
            return prev;
        }
    }