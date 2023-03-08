bool check(vector<int> diff, int k, int w, int tryFor){
            int prev = 0;
            for(int i=0; i<diff.size(); i++){
                diff[i] += prev;
                prev = diff[i];
                if(diff[i] >= tryFor)
                    continue;
                k -= (tryFor - diff[i]);
                if(k < 0)
                    return 0;
                if(i+w < diff.size())
                    diff[i+w] -= (tryFor - diff[i]);
                prev = tryFor;
            }
            return 1;
        }
        long long int maximizeMinHeight(int n,int k,int w,vector <int> &a)
        {
            // code here
            vector<int> diff(n);
            diff[0] = a[0];
            int minHeight = a[0];
            for(int i=1; i<n; i++){
                diff[i] = a[i] - a[i-1];
                minHeight = min(a[i],minHeight);
            }
            
            int maxHeight = minHeight+k;
            
            long long ans;
            while(minHeight <= maxHeight){
                int tryFor = (minHeight+maxHeight)/2;
                if(check(diff, k, w, tryFor)){
                    ans = tryFor;
                    minHeight = tryFor+1;
                }
                else
                    maxHeight = tryFor-1;
            }
            return ans;
        }