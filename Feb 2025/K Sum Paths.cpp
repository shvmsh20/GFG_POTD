int ans=0;
   void solve(Node* root,unordered_map<int,int>&mp,int sum,int k){
       if(root==NULL)return;
       sum+=root->data;
       if(mp.find(sum-k)!=mp.end())ans+=mp[sum-k];
       mp[sum]++;
       solve(root->left,mp,sum,k);
       solve(root->right,mp,sum,k);
       mp[sum]--;
   }
    int sumK(Node *root, int k) {
      unordered_map<int,int>mp;
      mp[0]=1;
      solve(root,mp,0,k);
      return ans;
    }