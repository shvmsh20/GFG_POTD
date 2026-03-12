int kBitFlips(vector<int>& arr, int k) {
        // code here
        int n = arr.size(), res = 0;
        queue<int> q;
        for(int i=0; i<n; i++){
            if(i-k>=0){
                if(!q.empty() && q.front()==i-k){
                    q.pop();
                }
            }
            if((arr[i]+q.size())%2==0){
                if(i+k>n) return -1;
                q.push(i);
                res++;
            }
        }
        return res;
        
    }