long long help(long long n)
{   
    if(n<6) return n+(n-1);
    if(n%5 == 0) return ((help((n/5) - 1))*10) + 9;
    else return (help(n/5)*10) + (n%5)+(n%5)-1;
}
long long findNumber(long long N){
    return help(N);
}