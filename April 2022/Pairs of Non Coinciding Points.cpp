int numOfPairs(int X[], int Y[], int N) {
        int cntDup = 0;
        
        map<int,int> mapX, mapY;
        map<pair<int,int>, bool> mp;
        
        for(int i=0; i<N; i++)
        {
            mapX[X[i]]++;
            mapY[Y[i]]++;
            
            if(mp[{X[i],Y[i]}])
            cntDup++;
            else
            mp[{X[i],Y[i]}] = true;
        }
        
        int ans = 0;
        
        for(auto it : mapX)
        {
            int cnt = it.second;
            
            ans += (cnt*(cnt-1))/2;
        }
        
        for(auto it : mapY)
        {
            int cnt = it.second;
            
            ans += (cnt*(cnt-1))/2;
        }
        
        return ans-2*cntDup;
        
    }