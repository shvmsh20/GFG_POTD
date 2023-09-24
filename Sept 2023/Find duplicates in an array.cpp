vector<int> duplicates(int arr[], int n) {
        // code here
        sort(arr,arr+n);
        set<int>seti;
        
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]==arr[i+1])
            {
            seti.insert(arr[i]);
            i++;
            }
        }
        
        if(seti.empty())
        seti.insert(-1);
        vector<int>ans(seti.size());
        copy(seti.begin(),seti.end(),ans.begin());
        return ans;
    }