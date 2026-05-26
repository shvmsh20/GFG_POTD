int minToggle(vector<int>& arr) {
        // code here
        int ones = 0, zeros = 0;
        for(int x: arr){
            if(x){
                ones++;
            }else{
                zeros++;
            }
        }
        int res = min(ones, zeros);
        int prevOnes = 0;
        for(int x: arr){
            if(x==0){
                zeros--;
            }
            res = min(res, prevOnes+zeros);
            if(x==1){
                prevOnes++;
            }
        }
        return res;
    }