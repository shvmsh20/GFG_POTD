int solve(int N, int K, vector<int> &arr) {
        // code here
        int sum=0;
        for(int i=0; i<N; i++){
            sum+=arr[i];
        }
        vector<int> divisors;
        for(int i=1; i<=sqrt(sum)+1; i++){
            if(sum%i==0){
                divisors.push_back(i);
                divisors.push_back(sum/i);
            }
        }
        for(int i=1; i<N; i++){
            arr[i] += arr[i-1];
        }
        int res = 1;
        for(int x: divisors){
            int cnt=0;
            for(int i=0; i<N; i++){
                if(arr[i]%x==0){
                    cnt++;
                }
            }
            if(cnt>=K){
                res = max(res, x);
            }
        }
        return res;
    }