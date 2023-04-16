string largestNumber(int n, int sum)
    {
        // Your code here
        string res="";
        int len=0;
        while(sum>0){
            if(len==n){
                return "-1";
            }
            if(sum>=9){
                res.push_back('9');
                sum-=9;
            }else{
                res.push_back('0'+sum);
                sum=0;
            }
            len++;
            
        }
        while(res.length()<n){
            res.push_back('0');
        }
        return res;
    }