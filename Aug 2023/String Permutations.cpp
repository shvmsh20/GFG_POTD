void permute(vector<string>&v, int l, int r,string &s)
    {
        if(l==r)
        v.push_back(s);
        
        for(int i=l;i<=r;i++)
        {
            swap(s[l],s[i]);
            permute(v,l+1,r,s);
            swap(s[l],s[i]);
        }
    }
    
    vector<string> permutation(string S)
    {
        //Your code here
        vector<string>v;
        int r=S.size()-1;
        int l=0;
        permute(v,l,r,S);
        
        sort(v.begin(),v.end());
        return v;
        
    }