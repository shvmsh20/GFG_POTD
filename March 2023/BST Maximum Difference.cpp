vector<Node*> targetNodes;
    int maxSumFromRootToTarget = INT_MIN, minSumFromTargetToLeaf = 1e5+1;
public:
    void findMax2(Node* root, int target, int& sum) {
        
        if(!root)return;
        
        sum += root->data;
        
        if(!root->left and !root->right) {
            minSumFromTargetToLeaf = min(minSumFromTargetToLeaf, sum);
        }
        
        findMax2(root->left,target,sum);
        findMax2(root->right,target,sum);
        
        sum -= root->data;
    }
    void findMax1(Node* root, int target, int& sum) {
        if(!root)return;
        
        if(root->data == target) {
            targetNodes.push_back(root);
            maxSumFromRootToTarget = max(maxSumFromRootToTarget,sum);
        }
        
        sum += root->data;
        findMax1(root->left,target,sum);
        findMax1(root->right,target,sum);
        sum -= root->data;
    }
    int maxDifferenceBST(Node *root,int target){
        int sum = 0;
        findMax1(root,target,sum);
        
        if(maxSumFromRootToTarget == INT_MIN)return -1;
        
        sum = 0;
        for(auto &node: targetNodes) {
            findMax2(node->left,target,sum);
            sum = 0;
            findMax2(node->right,target,sum);
            sum = 0;
        }
        if(minSumFromTargetToLeaf == 1e5+1)return maxSumFromRootToTarget;
        
        return maxSumFromRootToTarget - minSumFromTargetToLeaf;
    }