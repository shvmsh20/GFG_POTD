int totalElements(vector<int> &arr) {
        // code here
        int n = arr.size(), left = 0, res = 0;
        unordered_map<int, int> mp;
        for(int right=0; right<n; right++){
            mp[arr[right]]++;
            while(mp.size()>2){
                mp[arr[left]]--;
                if(mp[arr[left]]==0){
                    mp.erase(arr[left]);
                }
                left++;
            }
            res = max(res, right-left+1);
        }
        return res;
    }