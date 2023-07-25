vector<int> findSpiral(Node *root)
{
    //Your code here
  vector<int>result;
    if(root==NULL){
        return result;
    }
    queue<Node*>q;
    q.push(root);
    bool rightToleft=true;
    while(!q.empty()){
        int size=q.size();
        vector<int>ans(size);
        for(int i=0;i<size;i++){
            Node* frontNode=q.front();
            q.pop();
            
            int index = rightToleft ? i : size-i-1;
            ans[index]=frontNode->data;
            if(frontNode->right!=NULL){
                q.push(frontNode->right);
            }
            if(frontNode->left!=NULL){
                q.push(frontNode->left);
            }
        }
        rightToleft=!rightToleft;
        for(auto i:ans){
            result.push_back(i);
        }
    }
    return result;    
}