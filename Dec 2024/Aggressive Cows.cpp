int isPoss(int x, int k, int n, vector<int> &stalls){
        int cnt = 1, last = stalls[0];
        for(int i=1; i<n; i++){
            if(stalls[i]-last>=x){
                cnt++;
                last = stalls[i];
            }
        }
        return cnt>=k;
    }
    int aggressiveCows(vector<int> &stalls, int k) {

        // Write your code here
        int n = stalls.size();
        sort(stalls.begin(), stalls.end());
        int st = 1, end = stalls[n-1]-stalls[0];
        int res = 0;
        while(st<=end){
            int mid = st+(end-st)/2;
            if(isPoss(mid, k, n, stalls)){
                res = mid;
                st = mid+1;
            }else{
                end = mid-1;
            }
        }
        return res;
    }