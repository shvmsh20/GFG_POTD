bool solve(Node* node, int currSum, int target){
        if(node==nullptr){
            return false;
        }
        currSum+= node->data;
        if(!node->left && !node->right && currSum==target){
            return true;
        }
        return solve(node->left, currSum, target) || solve(node->right, currSum, target); 
    }
    bool hasPathSum(Node *root, int target) {
        // Your code here
        return solve(root, 0, target);
    }