 Node* LCS(Node* root,int p,int q){
        if(root==NULL || root->data==p || root->data==q){
            return root;
        }

        Node* left=LCS(root->left,p,q);
        Node* right=LCS(root->right,p,q);

        if(left && right){
            return root;
        }

        else if(left){
            return left;
        }

        else {
            return right;
        }
    }

    int solver(Node* root,int p,int q,int prev){
        if(root==NULL){
            return 1e9;
        }

        if(root->data==p || root->data==q){
            return 0;
        }

        int ans=1e9;

        if(!prev){
            ans=min({ans,0+solver(root->left,p,q,0),1+solver(root->right,p,q,1)});
        }

        else{
            ans=min({ans,1+solver(root->left,p,q,0),0+solver(root->right,p,q,1)});
        }

        return ans;
    }
  public:
    int numberOfTurns(Node* root, int p, int q) {
        // code here
        Node* point=LCS(root,p,q);

        int left=solver(point->left,p,q,0);
        int right=solver(point->right,p,q,1);

        int ans=0;
        if(left<1e9){
            ans+=left;
        }

        if(right<1e9){
            ans+=right;
        }

        ans++;

        if(point->data==p || point->data==q){
            ans--;
        }

        if(ans==0){
            return -1;
        }


        return ans;
    }