int minimumStep(int n){
        //complete the function here
         int ans = 0;

        while(n >= 3){

            ans += n % 3 + 1;

            n /= 3;

        }

        return ans + (n - 1);
    }