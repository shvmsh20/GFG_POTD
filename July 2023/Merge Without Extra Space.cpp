void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            for(int tmp2=0, tmp1=n-1;tmp2<m&&tmp1>=0;tmp2++)
            {
                int element=arr2[tmp2];
                if(arr2[tmp2]<arr1[tmp1])
                {
                    //perform swap operation
                    int d=arr1[tmp1];
                    arr1[tmp1]=arr2[tmp2];
                    arr2[tmp2]=d;
                    tmp1--;
                }
                else 
                {   
                    //i.e. arr2[tmp2]>arr1[tmp1]  --->  i.e. arr1[tmp1] is itself smaller than 1st element of arr2 range (tmp2, n)
                    //and as array is sorted we can say that in range (tmp2 to m) there will not be any element smaller than arr2[tmp2]. so we can now break it
                    break;}
            }
            //as we swappped element , the array possibly contain unsorted data so our last step is to sort the both arrays
            sort(arr1, arr1+n);
            sort(arr2, arr2+m);
        } 