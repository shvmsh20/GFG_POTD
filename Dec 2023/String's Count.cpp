long long int countStr(long long int n){
    //complete the function here
     long long sum=0;
    if (n==1){
        sum=3;
    }
    else if (n==2){
        sum=8;
    }
    else {
        sum=1+(2*n)+(n*(n-1)/2)+(n*(n-1))+(n*(n-1)*(n-2)/2);
    }
    return sum;
}