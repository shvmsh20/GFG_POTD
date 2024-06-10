void matchPairs(int n, char nuts[], char bolts[]) {
        // code here
         vector<int>v={'!','#','$','%','&','*','?','@','^'};
        map<char,int>mp;
        for(auto it:v){
            mp[it]++;
        }
        for(int i=0;i<n;i++){
            mp[nuts[i]]++;
        }
        int i=0;
        for(auto it:mp){
            int num=it.second-1+i;
            int ch=it.first;
            for(;i<num;i++){
                bolts[i]=it.first;
                nuts[i]=it.first;
            }
        }
    }