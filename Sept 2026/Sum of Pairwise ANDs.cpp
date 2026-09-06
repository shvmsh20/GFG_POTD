long long pairAndSum(vector<int> &arr) {
        // code here
        vector<long long> v(32,0);
                long long sum = 0;
                int n = arr.size();
                for(int i = n-1;i>=0;i--){
                    int a = arr[i];
                    int j = 0;
                    while(a > 0){
                       int r = a%2;
                       if(r == 1){
                           sum += ((1<<j)*v[j]);
                       }
                       v[j] = v[j] + r;
                       a = a/2;
                       j++;
                    }
                }
                return sum;
    }