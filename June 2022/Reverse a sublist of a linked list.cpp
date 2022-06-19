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