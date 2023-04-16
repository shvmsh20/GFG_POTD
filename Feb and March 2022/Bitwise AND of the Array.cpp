//M-1
int count(int N, vector<int> A,int X)
    {
        // code here
        int ans=N;

        int mask=0;

        for(int i=31;i>=0;i--){

            if((X>>i)&1){

              mask^=(1<<i);

              continue;

            }

            int temp=mask^(1<<i);

            int count=0;

            for(int j=0;j<N;j++){

              if((temp&A[j])!=temp)

              count++;

            }

            ans=min(ans,count);

        }

      return ans;
    }

//M-2    
int count(int N, vector<int> A,int X)
    {
        // code here
        int ans=INT_MAX, bitSetInX=0;
        for(int i=30; i>=0; i--){
            if((1<<i) & X){
                bitSetInX = bitSetInX | (1<<i);
            }else{
                //golden opportunity
                int temp = bitSetInX | (1<<i);
                int modify=0;
                for(auto x: A){
                    if((temp & x) != temp){
                        modify++;
                    }
                }
                ans = min(ans, modify);
            }
        }
        return ans;
    }