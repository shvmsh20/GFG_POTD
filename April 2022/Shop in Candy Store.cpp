vector<int> candyStore(int candies[], int N, int K)
    {
        
        sort(candies, candies+N);
        int res1=0, res2=0;
        int x = ceil(1.0*N/(K+1));
        vector<int> v;
        for(int i=0, j=N-1; i<x; i++, j--){
            res1+= candies[i];
            res2+= candies[j];
        }
        v.push_back(res1);
        v.push_back(res2);
        return v;
    }