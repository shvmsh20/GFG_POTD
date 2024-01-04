int singleElement(int arr[] ,int N) {
        // code here
        int res = 0;
        for(int i=0; i<32; i++){
            int onesCount = 0;
            for(int j=0; j<N; j++){
                int x = arr[j];
                if(x&(1<<i)){
                    onesCount++;
                }
            }
            if(onesCount%3==1){
                res = res | (1<<i);
            }
        }
        return res;
    }