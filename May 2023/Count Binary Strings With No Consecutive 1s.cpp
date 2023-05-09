long long int mod = 1e9+7;
    
    vector<vector<int>> multiply(vector<vector<int>> A1,vector<vector<int>> A2)
    {
        vector<vector<int>> res = {{0,0},{0,0}};
        for(int k=0;k<2;k++)
        {
            for(int i=0;i<2;i++)
            {
                long long int sum = 0;
                for(int j=0;j<2;j++)
                {
                    sum += ((long long int)A1[k][j]*A2[j][i]);
                }
                res[k][i] = sum%mod;
            }
        }
        return res;
        
    }
    
    int pow(vector<vector<int>> &A,long long int N)
    {
        vector<vector<int>> res = {{1,1},{1,1}};
        while(N)
        {
            if(N%2) 
            {
                res = multiply(res,A);
                N--;
            }
            A = multiply(A,A);
            N /= 2;
        }
        return res[0][1]%mod;
    }
    
    int countStrings(long long int N) {
        vector<vector<int>> A = {{1,1},{1,0}};
        return pow(A,N+1);
    }