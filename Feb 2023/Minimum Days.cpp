int getMinimumDays(int N,string S, vector<int> &P) {
        // code here
        map<int,int> mp;
        int ma=0, flag=0;
        for(int i=0;i<N;i++){
            mp[P[i]]=i;
        }
        for(int i=1;i<N;i++){
            if(S[i]==S[i-1]){
                ma=max(ma, min(mp[i], mp[i-1]));
                flag=1;
            }
        }
        return flag?ma+1:0;
    }