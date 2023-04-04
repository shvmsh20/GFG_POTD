bool isPoss(int val, int num, vector<int> &A, int n){
        
        int count=0, curr=0;
        for(int i=0; i<n; i++){
            int curr = A[i], t=A[i];
            while(t<=val){
                count++;
                curr+= A[i];
                t+=curr;
            }
        }
        return count>=num;
    }
    int findMinTime(int N, vector<int>&A, int L){
        //write your code here
        
        sort(A.begin(), A.end());
        int lo = A[0];
        int hi=A[L-1]*N*(N+1)/2;
        int res = -1;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(isPoss(mid, N, A, L)){
                hi = mid-1;
                res = mid;
            }else{
                lo = mid+1;
            }
        }
        return res;
    }