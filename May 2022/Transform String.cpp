int transform (string A, string B)
    {
        //code here.
        int a=0;
        int n = A.size();
        int m = B.size();
        if(n!=m){
            return -1;
        }
        for(int i=0; i<n; i++){
            a+= (int)A[i];
            a-= (int)B[i];
        }
        if(a!=0){
            return -1;
        }
        int count=0;
        int i=n-1, j=n-1;
        while(i>=0 && j>=0){
            if(A[i]==B[j]){
                i--;
                j--;
            }else{
                count++;
                i--;
            }
        }
        return count;
    }