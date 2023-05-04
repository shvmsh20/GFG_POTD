int maxCoins(int n,vector<vector<int>> &ra){
        // Code here
        sort(begin(ra), end(ra) , [](auto & a , auto & b ){
            if(a[0]==b[0])
            return a[1]<b[1];
            return a[0]<b[0] ;
            
        }) ; 
        vector<int>suff(n ,0 ) ; 
        suff[n-1] =ra[n-1][2] ;
        for(int i =n-2 ;i>=0 ;i-- )
        {
            suff[i] = max(suff[i+1] , ra[i][2]) ;
        }
     
        
        int maxi = suff[0] ;
        for(int i =0 ; i<n;i++ )
        {
            int x = ra[i][0] , y =ra[i][1] ,cost =ra[i][2] ;
            int l= i+1 ,r = n-1  , ind =-1 , mm =0 ;
            while(l<=r )
            {
                int mid =  (r+l)/2; 
                
                if(ra[mid][0]>=y)
                {
            
                  mm = max(mm , suff[mid]);
                    r=mid-1;
                }
                else
                l=mid+1; 
            }
         
            maxi =max(maxi, cost+mm) ;
           
        }
       
        
      return maxi ;  
    }