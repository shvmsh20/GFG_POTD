vector<int> increasingNumbers(int n) {
        // code here
        vector<int> res;
        if(n>9){
            return res;
        }else if(n==1){
            for(int i=0; i<10; i++){
                res.push_back(i);
            }
            return res;
        }
        queue<int> q;
        for(int i=1; i<=9; i++){
            q.push(i);
        }
        while(!q.empty()){
            int x = q.front();
            q.pop();
            int digits = log10(x)+1;
            if(digits==n){
                res.push_back(x);
            }else{
                int lastDigit = x%10;
                for(int i=lastDigit+1; i<=9; i++){
                     int y = (x*10)+i;
                    q.push(y);
                }
            }
        }
        return res;
    }