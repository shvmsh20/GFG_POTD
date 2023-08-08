int countFractions(int n, int numerator[], int denominator[])
    {
        map<pair<int,int>,int> mp;
        int ans=0;
        for(int i=0;i<n;i++){
            int d = __gcd(numerator[i],denominator[i]);
            int a=numerator[i]/d;
            int b=denominator[i]/d;
            int diff=b-a;
            if(mp.find({diff,b})!=mp.end()) ans+=mp[{diff,b}];
            mp[{a,b}]++;
        }
        return ans;
    }