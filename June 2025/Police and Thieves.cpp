int catchThieves(vector<char> &arr, int k) {
        // Code here
        int n = arr.size();
        vector<int> thief;
        vector<int> police;
        for(int i=0; i<n; i++){
            if(arr[i]=='P'){
                police.push_back(i);
            }else{
                thief.push_back(i);
            }
        }
        int p=0, t=0;
        int ans=0;
        while(p<police.size() && t<thief.size()){
            if(abs(police[p]-thief[t])<=k){
                ans++;
                p++;
                t++;
            }else{
                if(police[p]<thief[t]){
                    p++;
                }else{
                    t++;
                }
            }
        }
        return ans;
    }