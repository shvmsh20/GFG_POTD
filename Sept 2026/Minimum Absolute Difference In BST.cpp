void solve(Node* root, vector<int> &inorder){
          //Base Case
          if(root== NULL) return;
          //Recursive Call
          solve(root->left, inorder);
          inorder.push_back(root->data);
          solve(root->right, inorder);
      }
      int absDiff(Node *root)
      {
          //Your code here
          int ans = INT_MAX;
          vector<int> inorder;
          solve(root,inorder);
          for(int i=0; i<inorder.size()-1; i++){
              int diff = inorder[i+1] - inorder[i];
              ans = min(ans, diff);
          }
          return ans;
      }