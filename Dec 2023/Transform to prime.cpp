bool isPrime(int a){
        if(a == 1){
            return false;
        }
        if(a == 2){
            return true;
        }
        if(a%2 == 0){
            return false;
        }
        
        for(int i = 2;i<=sqrt(a);i++){
            if(a%i == 0){
                //cout<<a<<" "<<i<<endl;
                return false;
            }
        }
        
        return true;
    }
    public:
    int minNumber(int arr[],int N)
    {
        int sum{0}, reqsum{0};
        for(int i = 0;i<N;i++){
            sum += arr[i];
        }
        if(isPrime(sum)){
            return 0;
        }
        reqsum = sum;
        if(!(sum&1)){
            ++sum;
        }
        while(!isPrime(sum)){
            sum+=2;
        }
        
        return sum - reqsum;
    }