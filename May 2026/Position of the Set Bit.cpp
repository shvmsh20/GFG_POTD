int findPosition(int n) {
        // code here
        int res = -1;
        for(int i=0; i<32; i++){
            if(n & (1<<i)){
                if(res==-1){
                    res = i+1;
                }else{
                    return -1;
                }
            }
        }
        return res;
    }