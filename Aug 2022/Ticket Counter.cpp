int distributeTicket(int n, int k) {
        // code here
         int i = 0;
        int j = n+1;
        bool flag = true;
        while(i<j){
            if(flag){
                if(i+k<j){
                    i+=k;
                }else if(i+k>=j){
                    return j-1;
                }
                flag = false;
                if(i+1 == j){
                    return i;
                }
            }else{
                if(j-k>i){
                    j-= k;
                }else{
                      return i+1;
                }
                flag = true;
                if(j-1 == i){
                    return j;
                }
            }
            
        }
        return 0;
    }