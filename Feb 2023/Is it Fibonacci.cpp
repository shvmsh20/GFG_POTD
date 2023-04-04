long long solve(int N, int K, vector<long long> GeekNum) {
        // code here
        if(K==N){
            return GeekNum[K-1];
        }
        long long num = 0;
        for(int i=0; i<K; i++){
            num+=GeekNum[i];
        }
        GeekNum.push_back(num);
        long long itr = N-K - 1, newNum=num;
        long long x = 0;
        while(itr){
            newNum = num+num - GeekNum[x];
            GeekNum.push_back(newNum);
            x++;
            itr--;
            num = newNum;
        }
        return num;
    }