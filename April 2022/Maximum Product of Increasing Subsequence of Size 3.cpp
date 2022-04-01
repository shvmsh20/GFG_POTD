vector<int> maxProductSubsequence(int *arr , int n) 
    { 
        // Complete the function
        vector<int> ans;
        int gr[n];
        long long int mx = -1;
        gr[n-1] = arr[n-1];
        for(int i=n-2; i>=0; i--){
            gr[i] = max(arr[i], gr[i+1]);
        }
        set<int> s;
        s.insert(arr[0]);
        for(int i=1; i<n-1; i++){
            s.insert(arr[i]);
            auto it = s.find(arr[i]);
            if(it==s.begin()) continue;
            int first = *(--it);
            int third = gr[i+1];
            if(first<arr[i] && arr[i]<third && 1LL*first*1LL*arr[i]*1LL*third>mx){
                ans = {first, arr[i], third};
                mx = 1LL*first*1LL*arr[i]*1LL*third;
            }
        }
        if(ans.empty()){
            ans.push_back(-1);
        }
        return ans;
    } 