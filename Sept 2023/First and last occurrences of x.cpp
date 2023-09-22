int firstocc(int arr[],int n,int x)
    {
        int s=0,e=n-1,ans=-1;
        while(s<=e)
        {
            int mid=int((s+e)/2);
            if(arr[mid]==x)
            {
                ans=mid;
                e=mid-1;                  // finding in the left side for first occ
            }
            else if(arr[mid]>x)
            {
                e=mid-1;
            }
            else s=mid+1;
        }
        return ans;
    }
    int lastocc(int arr[],int n,int x)
    {
        int s=0,e=n-1,ans=-1;
        while(s<=e)
        {
            int mid=int((s+e)/2);
            if(arr[mid]==x)
            {
                ans=mid;
                s=mid+1;               // finding in the right side for last occ
            }
            else if(arr[mid]>x)
            {
                e=mid-1;
            }
            else s=mid+1;
        }
        return ans;
    }
    vector<int> find(int arr[], int n , int x )
    {
        vector<int>ans;
        int f=firstocc(arr,n,x);
        int l=lastocc(arr,n,x);
        ans.push_back(f);
        ans.push_back(l);
        return ans;
    }