bool rec(int curr, int k, int m, int n, vector<int> &a){
        if(curr==n){
            return true;
        }
        if(n-curr<k){
            return false;
        }
        for(int i=curr+k-1; i<n; i++){
            if(a[i]-a[curr]>m){
                return false;
            }
            if(rec(i+1, k, m, n, a)){
                return true;
            }
        }
        return false;
    }
    bool partitionArray(int N, int K, int M, vector<int> &A){
        // code here
        sort(A.begin(), A.end());
        return rec(0, K, M, N, A);
    }