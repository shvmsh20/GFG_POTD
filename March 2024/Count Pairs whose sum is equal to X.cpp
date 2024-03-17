int countPairs(struct Node* head1, struct Node* head2, int x) {
        // Code here
        unordered_map<int, int> mp;
        while(head1){
            mp[head1->data]++;
            head1 = head1->next;
        }
        int res = 0;
        while(head2){
            if(mp.find(x-head2->data)!=mp.end()){
                res+= mp[x-head2->data];
            }
            head2  = head2->next;
        }
        return res;
    }