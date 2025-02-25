int getMaxArea(vector<int> &arr) {
        // Your code here
        int n = arr.size();
        stack<int> s;
        long long res=0;
        long long curr=0;
        for(int i=0;i<n;i++){
            while(!s.empty() && arr[s.top()]>=arr[i]){
                int tp = s.top();
                s.pop();
                curr = arr[tp]*(s.empty()?i:(i-s.top()-1));
                res = max(res, curr);
            }
            s.push(i);
        }
        while(!s.empty()){
                int tp = s.top();
                s.pop();
                curr = arr[tp]*(s.empty()?n:(n-s.top()-1));
                res = max(res, curr);
            }
            return res;
    }