int minDiff(int k, vector<int> &arr) {
        // code here
        int n = arr.size();
                if(k==n)return 0;
                vector<pair<int,int>>right(n);
                vector<pair<int,int>>left(n);
                int ans = INT_MAX;

                right[n-1] = {arr[n-1],arr[n-1]};
                left[0] = {arr[0],arr[0]};

                for(int i=1;i<n;i++){
                    left[i].first = max(left[i-1].first,arr[i]);
                    left[i].second = min(left[i-1].second,arr[i]);
                }
                for(int i=n-2;i>=0;i--){
                    right[i].first = max(right[i+1].first,arr[i]);
                    right[i].second = min(right[i+1].second,arr[i]);
                }

                ans = min(ans,right[k].first-right[k].second);
                ans = min(ans,left[(n-k)-1].first-left[(n-k)-1].second);

                int l = 0;
                int r = k+1;

                while(r<n){
                    int maxi = max(left[l].first,right[r].first);
                    int mini = min(left[l].second,right[r].second);
                    ans = min(ans,maxi-mini);
                    l++;
                    r++;
                }

                return ans;
    }