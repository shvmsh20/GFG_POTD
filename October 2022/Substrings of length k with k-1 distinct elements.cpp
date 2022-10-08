int countOfSubstrings(string S, int K) {
        // code here
        unordered_map<char, int> mp;
        int n = S.length();
        for(int i=0; i<K; i++){
            mp[S[i]]++;
        }
        int count=0;
        for(int i=K; i<n; i++){
            if(mp.size()==(K-1)){
                count++;
            }
            mp[S[i-K]]--;
            if(mp[S[i-K]]==0){
                mp.erase(S[i-K]);
            }
            mp[S[i]]++;
        }
        if(mp.size()==K-1){
            count++;
        }
        return count;
    }