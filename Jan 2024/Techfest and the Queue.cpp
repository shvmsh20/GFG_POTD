int sumOfPowers(int a, int b){
	    // Code here
	     int ans=0;
        for(int i=a; i<=b; i++)
        {
            int num=i;
            for(int j=2; j<=sqrt(i); j++)
            {
                int x=j;
                while(num%j==0)
                {
                    ans++;
                    num=num/j;
                }
               
            }
             if(num>1)
                {
                    ans++;
                }
        }
        return ans;
	}