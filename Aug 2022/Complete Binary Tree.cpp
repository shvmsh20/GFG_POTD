bool isCompleteBT(Node* root){
        //code here
        queue<Node*>q;
       bool flag=false;
      q.push(root);
      while(!q.empty()){
      int sz=q.size();
      for(int i=0;i<sz;i++){
         
          Node *ptr=q.front();
                    q.pop();
          if(ptr==NULL){
              flag=true;
          }
          else{
              if(flag){
                  return false;
              }
              else{
                  q.push(ptr->left);
                  q.push(ptr->right);
              }
          }
      }} return true;
    }