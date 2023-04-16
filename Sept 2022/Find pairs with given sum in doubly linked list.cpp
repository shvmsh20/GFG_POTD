vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        // code here
        Node *left=head,*right=head;
       while(right->next!=NULL)
           right=right->next;
       vector<pair<int,int>> v;
       while(left!=right){
           int curr=left->data+right->data;
           if(curr==target)
             v.push_back({left->data,right->data});
           if(curr>=target)
               right=right->prev;
          else
              left=left->next;
       }
       return v;
    }