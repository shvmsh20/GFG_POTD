int helper(int val, vector<vector<int>> &matrix, int n, int m){
        int count=0;
        for(int i=0; i<n; i++){
            count+= upper_bound(matrix[i].begin(), matrix[i].end(), val) - matrix[i].begin();
        }
        return count;
    }
    int median(vector<vector<int>> &matrix, int n, int m){
        // code here    
        int lo = INT_MAX, hi = INT_MIN;
        for(int i=0; i<n; i++){
            lo = min(lo, matrix[i][0]);
            hi = max(hi, matrix[i][m-1]);
        }
        int req = (n*m+1)/2, res = -1;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            int count = helper(mid, matrix, n, m);
            if(count>=req){
                res = mid;
                hi = mid-1;
            }else{
                lo = mid+1;
            }
        }
        return res;
    }