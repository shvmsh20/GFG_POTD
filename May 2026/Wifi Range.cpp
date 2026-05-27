bool wifiRange(string &s, int x) {
        // code here
        int n = s.size();
        vector<int> cover(n);
        for(int i=0; i<n; i++){
            if(s[i]=='1'){
                cover[max(0, i-x)]++;
                if(i+x+1<n){
                    cover[i+x+1]--;   
                }
            }
        }
        if(cover[0]==0) return false;
        for(int i=1; i<n; i++){
            cover[i]+= cover[i-1];
            if(cover[i]==0){
                return false;
            }
        }
        return true;
    }