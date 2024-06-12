bool containsFour(int num){
        while(num){
            int lastDigit = num%10;
            if(lastDigit==4){
                return true;
            }
            num = num/10;
        }
        return false;
    }
    int countNumberswith4(int n) {
        // code here
        int res = 0;
        for(int i=1; i<=n; i++){
            if(containsFour(i)){
                res++;
            }
        }
        return res;
    }