vector<int> diagonal(Node *root)
{
   // your code here
   queue<Node* > q;
   vector<int> res;
   while(root!=nullptr || q.empty()==false){
       while(root){
           if(root->left){
                q.push(root->left);
            }
            res.push_back(root->data);
            root = root->right;
       }
       if(!q.empty()){
            root = q.front();
            q.pop();
       }
       
   }
   return res;
}