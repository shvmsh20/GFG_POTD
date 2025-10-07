class Solution {
  public:
    vector<int> bottomView(Node *root) {
        // code here
        vector<int> res;
        if(root==NULL){
            return res;
        }
        queue<pair<Node*, int>> q;
        q.push({root, 0});
        map<int, int> mp;
        while(!q.empty()){
            int n = q.size();
            for(int i=0; i<n; i++){
                auto p = q.front();
                q.pop();
                mp[p.second] = p.first->data;
                if(p.first->left){
                    q.push({p.first->left, p.second-1});
                }
                if(p.first->right){
                    q.push({p.first->right, p.second+1});
                }
            }
            
        }
       
        for(auto x: mp){
            res.push_back(x.second);
        }
        return res;
    }
};