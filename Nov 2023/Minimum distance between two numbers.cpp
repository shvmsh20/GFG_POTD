int minDist(int arr[], int n, int x, int y) {
        // code here
            int idx1=-1,idx2=-1,min_dist = INT_MAX;
    for(int i=0;i<n;i++)
    {
       
       if(arr[i]==x)
       {
          idx1=i;
       }
       else if(arr[i]==y)
       {
          idx2=i;
       }
       
       if(idx1!=-1 && idx2!=-1)
        min_dist=min(min_dist,abs(idx1-idx2));
    }
     
   
    if(idx1==-1||idx2==-1)
        return -1;
    else
        return min_dist;
    }