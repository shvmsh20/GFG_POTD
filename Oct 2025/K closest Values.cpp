/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
     void inorderTraversal(Node* root,vector<int>&inorder){
      if(!root)
      return;
      if(root->left!=nullptr)
      inorderTraversal(root->left,inorder);
      inorder.push_back(root->data);
      if(root->right!=nullptr)
      inorderTraversal(root->right,inorder);
      
  }
    vector<int> getKClosest(Node* root, int target, int k) {
        // code here
        //do inorder traversal of the bst 
        vector<int>inorder;
        inorderTraversal(root,inorder);
        vector<pair<int,int>>diff;
        for(int i=0;i<inorder.size();i++){
            diff.push_back({abs(inorder[i]-target), inorder[i]});
    }
    sort(diff.begin(),diff.end());
    vector<int>res;
    int i=k;
    while(k--){
       
        res.push_back(diff[k].second);

    }
    return res;
    }
};