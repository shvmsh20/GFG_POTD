vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        // code here
        long long int ans = 0;
        long long int last;
        for(int i = 0 ;i<N;++i){
            
            ans^=Arr[i];
        }
        last = ans & ~(ans-1);
        long long int a = 0 ,b  = 0;

        for(int i = 0;i<N ;++i){
            if(Arr[i]&last) a^=Arr[i];
            else b^=Arr[i];
            
        }
        vector<long long int> v;
        v.push_back(max(a,b));
        v.push_back(min(a,b));
        return v;
    }