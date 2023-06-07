vector<int> leastPrimeFactor(int n) {
        // code here
        vector<int>vec(n+1,INT_MAX);
        vec[0]=0;
        vec[1]=1;
        for(int i=2;i<n+1;i++){
            if(vec[i]>=INT_MAX){
                vec[i]=i;
                for(int j=2*i;j<n+1;j+=i){
                    vec[j]=min(vec[j],i);
                }
            }
        }
        return vec;
    }