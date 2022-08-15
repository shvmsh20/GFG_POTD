
class Solution{
    private:
    int z1 = 0, z2 = 0;
    Node* LCA(Node* root, int first, int second){
        if(root == NULL || root->data == first || root->data == second){
            return root;
        }
        Node* left = LCA(root->left, first, second);
        Node* right = LCA(root->right, first, second);
        
        if(left == NULL){
            return right;
        }
        else if(right == NULL){
            return left;
        }
        else    return root;
    }
    
    void turns(Node* lca, int first, int second, int dir, int turn){
        if(!lca)   return;
        if(lca->data == first) z1 = turn;
        if(lca->data == second)    z2 = turn;
        // left = 1, right = 0;
        if(dir == -1){
            turns(lca->left, first, second, 1, turn);
            turns(lca->right, first, second, 0, turn);
        }
        if(dir == 0){
            turns(lca->left, first, second, 1, turn+1);
            turns(lca->right, first, second, 0, turn);
        }
        
        if(dir == 1){
            turns(lca->left, first, second, 1, turn);
            turns(lca->right, first, second, 0, turn+1);
        }
    }
    
  public:
    // function should return the number of turns required to go from first node to second node 
    int NumberOFTurns(struct Node* root, int first, int second)
    {
        Node* LCA_ = LCA(root, first, second);
        int ans = -1;
        turns(LCA_, first, second, -1, 0);
        if(LCA_->data == first || LCA_->data == second){
                return abs(z1-z2);
        }
        return z1 + z2 + 1;
    }

};