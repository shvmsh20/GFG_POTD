int minimumTime(int N,int cur,vector<int> &pos,vector<int> &time){
        int ans=INT_MAX;
        for(int i=0;i<N;i++){
            ans=min(ans,abs((cur-pos[i]) * time[i]));
        }
        return ans;
    }