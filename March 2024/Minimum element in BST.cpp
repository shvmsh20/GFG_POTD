int solve(Node* node){
    if(!node->left){
        return node->data;
    }
    return solve(node->left);
}
class Solution {
  public:
    int minValue(Node* root) {
        // Code here
        if(!root){
            return -1;
        }
        return solve(root);
    }
};