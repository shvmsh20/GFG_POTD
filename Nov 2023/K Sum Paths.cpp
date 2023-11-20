#define ll long long
ll mo = 1000000007;
class Solution{
  public:
    void helper(Node *curr,int k,ll int cs,int &ans,unordered_map<ll int,int> &m){
        if(curr==NULL) return;
        cs +=curr->data;
        if(m.find(cs-k)!=m.end())
            ans = (ans+m[cs-k])%mo;
        ++m[cs];
        helper(curr->left,k,cs,ans,m);
        helper(curr->right,k,cs,ans,m);
        if(--m[cs] == 0 && cs!=0)
            m.erase(cs);
    }
    int sumK(Node *root,int k)
    {
        // code here
        int ans=0;
        unordered_map<ll int,int> m;
        m[0]=1;
        ll int cs=0;
        helper(root,k,cs,ans,m);
        return ans;
    }
};