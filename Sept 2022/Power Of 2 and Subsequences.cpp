long long numberOfSubsequences(int N, long long A[]){
        // code here 
         int even_cnt=0;

        for(int i=0;i<N;i++)

        {

            if(A[i]&(A[i]-1))

            continue;

            else

              {

                 even_cnt++;

              }

              

        }

         long long  seq_cnt=1;

        for(int i=1;i<=even_cnt;i++)

        {

            seq_cnt=(seq_cnt*2)%1000000007;

        }

        seq_cnt-=1;

        return seq_cnt;
    }