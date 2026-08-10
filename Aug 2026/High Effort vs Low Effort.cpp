int maxTask(vector<int>& h, vector<int>& l) {
        // code here
         int prev1 =0 ,prev2 = 0;
        for(int i = 0 ;i<h.size() ; i++){
            int curr = max(h[i] + prev2 , l[i] + prev1);
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }