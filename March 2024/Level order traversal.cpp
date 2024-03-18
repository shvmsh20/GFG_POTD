vector<int> levelOrder(Node* root)
    {
      //Your code here
      vector<int> res;
      queue<Node*> q;
      q.push(root);
      while(!q.empty()){
          int n = q.size();
          for(int i=0; i<n; i++){
              Node* node = q.front();
              q.pop();
              res.push_back(node->data);
              if(node->left){
                  q.push(node->left);
              }
              if(node->right){
                  q.push(node->right);
              }
          }
      }
      return res;
    }