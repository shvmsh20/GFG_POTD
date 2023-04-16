vector <int> lexicographicallyLargest(vector <int> &a,int n)
        {
            // Code here
             int rem=a[0]%2,prev=0;
             for(int i=1;i<n;i++)
             {
                if(a[i]%2!=rem)
                {
                    sort(a.begin()+prev,a.begin()+i,greater<int>());
                    rem=a[i]%2;
                    prev=i;
                }
             }
             sort(a.begin()+prev,a.end(),greater<int>());
             return a;
        }