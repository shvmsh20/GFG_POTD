vector<int> findSplit(vector<int>& arr) {
        // code here
         int sum=0;
        for(auto it:arr) sum+=it;
        
        if(sum%3!=0) return {-1,-1};
        
        int cnt=0;
        int k=sum/3;
        sum=0;
        int a=-1;
        vector<int>v;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(sum==k){
                sum=0;
                cnt++;
                if(cnt<3) v.push_back(i);
            }
        }
        
        if(cnt>=2) return v;
        else return {-1,-1};
    }