void reorderList(Node* head) {
        Node *temp = head;
        vector<int> res;
        while(temp){
            res.push_back(temp->data);
            temp=temp->next;
        }
        
        if(res.size()<=2)   return;
        
        int n=res.size();
        int i=0, idx=0;
        vector<int> nodes(n);
        while(idx<n){
            nodes[idx]=res[i];
            idx = idx+2;
            i++;
        }
        idx=1, i=n-1;
        while(idx<n){
            nodes[idx]=res[i];
            i--;
            idx+=2;
        }
        
        Node *order= head;
        for(auto val: nodes){
            order->data=val;
            order=order->next;
        }
    }