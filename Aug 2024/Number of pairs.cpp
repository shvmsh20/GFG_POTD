long long countPairs(vector<int> &a, vector<int> &b) {
        // Your Code goes here.
        int n=(int)a.size();
        int m=(int)b.size();
        long long res=0;
        sort(b.begin(),b.end());
        map<int,int>mp;
        for(auto it:b)
        {
            mp[it]++;
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
            continue;
            int x=a[i];
            if(a[i]==2)
            x+=2;
            int rem=upper_bound(b.begin(),b.end(),x)-b.begin();
            
            rem=m-rem;
            
            rem+=mp[1]*1LL;
            
            if(a[i]==3)
            rem+=mp[2]*1LL;
            // cout<<rem<<endl;
            res+=rem*1LL;
        }
        return res;
    }