vector<long long> jugglerSequence(long long n) {
        // code here
        vector<long long>ans;
        ans.push_back(n);
        while(n!=1){
            if(n%2!=0){
                ans.push_back(pow(n,1.5));
                n=pow(n,1.5);
            }
            else{
                ans.push_back(pow(n,0.5));
                n=pow(n,0.5);
            }
        }
        return ans;
    }