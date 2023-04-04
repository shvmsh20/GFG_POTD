int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        unordered_map<int, int> mp;
        int res = 0;
        int curr=0;
        mp[0] = -1;
        for(int i=0; i<N; i++){
            curr+=A[i];
            if(mp.find(curr-K)!=mp.end()){
                res = max(res, i-mp[curr-K]);
            }
            if(mp.find(curr)==mp.end()){
                mp[curr] = i;
            }
        }
        return res;
    } 