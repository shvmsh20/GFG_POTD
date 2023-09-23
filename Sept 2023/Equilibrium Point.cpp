int equilibriumPoint(long long a[], int n) {
    
        // Your code here
         if(n==1) return 1 ;
        int sum = 0 ;
        for(int i = 0 ; i<n ; i++)
        sum += a[i] ;
        int s1 = 0 , i = 1 , s2 = sum-a[0];
        for( ; i<n ; i++)
        {
            if(s1==s2)
            return i ;
            s1 += a[i-1] ;
            s2 = s2-a[i] ;
        }
        return -1 ;
    }