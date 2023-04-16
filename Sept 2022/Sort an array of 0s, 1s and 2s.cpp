void sort012(int a[], int n)
    {
        // code here 
        int l=0, m=0, h=n-1;
        while(m<=h){
            if(a[m]==0){
                swap(a[m], a[l]);
                m++;
                l++;
            }else if(a[m]==1){
                m++;
            }else{
                swap(a[m], a[h]);
                h--;
            }
            
        }

    }