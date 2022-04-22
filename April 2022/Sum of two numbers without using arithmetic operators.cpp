int sum(int a , int b)
    {
        int carry=a&b;
        int sum=a^b;
        while(carry>0){
            int shift=carry<<1;
            carry=sum&shift;
            sum=sum^shift;
        }
        return sum;
    }