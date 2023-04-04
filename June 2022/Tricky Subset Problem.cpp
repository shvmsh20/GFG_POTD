int isPossible(long long S, long long N, long long X, long long A[])
    {
        // code here
        unordered_set<long long> s;
        s.insert(S);
        long long csum=S, prevsum;
        vector<long long > v;
        v.push_back(csum);
        for(int i=0; i<N && csum<=X; i++){
            prevsum=csum;
            csum+= A[i];
            v.push_back(csum);
            csum+= prevsum;
        }
        for(int i=v.size()-1; i>=0; i--){
            if(v[i]<=X){
                X-=v[i];
            }
        }
        return  X==0;
    }