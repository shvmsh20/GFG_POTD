int minCandy(int N, vector<int> &ratings) {
        // code here
        int n = ratings.size();
        vector<int> left(n, 1), right(n, 1);
        for(int i=1; i<n; i++){
            if(ratings[i]>ratings[i-1]){
                left[i] = left[i-1]+1;
            }
        }
        for(int i=n-2; i>=0; i--){
            if(ratings[i]>ratings[i+1]){
                right[i] = right[i+1]+1;
            }
        }
        int res = 0;
        for(int i=0; i<n; i++){
            res+= max(left[i], right[i]);
        }
        return res;
    }