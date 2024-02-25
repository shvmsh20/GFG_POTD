long long int  solve(int j,int n,int arr[], vector<vector<int>>&dp){
        if(n==0){
            return 1;
        }
            if(n<3){
            return 0;
        }
        if(j==3)return 0;
        if(dp[j][n]!=-1){
           // cout<<"hemk";
            return dp[j][n];
        }
    //     long long int a=0,b=0,c=0;
    // if(n>=3) a=solve(n-3);
    // if(n>=5) b=solve(n-5);
    // if(n>=10)c=solve(n-10);
    
    //     return a+b+c;
    long long int count=0;
        for(int i=j;i<3;i++){
            if(n>=arr[i]){
                //cout<<n<<"-"<<arr[i]<<"="<<n-arr[i]<<" ";
                count+= solve(i,n-arr[i],arr,dp);
            }
        }
        // cout<<endl;
        return dp[j][n]=count;
    }
    long long int count(long long int n)
    {
        // Your code here
       int arr[3]={3,5,10};
       vector<vector<int>>dp(3,vector<int>(n+1,-1));
        return solve(0,n,arr,dp);

        
    }