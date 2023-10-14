void preorder(Node* root,vector<int>& v)
    {
        if(root==NULL)
        return;
        preorder(root->left,v);
        v.push_back(root->data);
        preorder(root->right,v);
        return ;
    }
    //Function to find the nodes that are common in both BST. 
    vector <int> findCommon(Node *root1, Node *root2)
    {
     //Your code here
     vector<int> v1;
     vector<int> v2;
     vector<int> v3;
     int i=0,j=0;
     preorder(root1,v1);
     preorder(root2,v2);
     while(i<v1.size() and j<v2.size())
     {
         if(v1[i]==v2[j])
         {
             v3.push_back(v1[i]);
             i++,j++;
         }
         else if(v1[i]<v2[j])
         {
             i++;
         }
         else
         j++;
     }
     return v3;
    }