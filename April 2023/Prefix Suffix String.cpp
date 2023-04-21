int prefixSuffixString(vector<string> &s1,vector<string> s2){
        // Code here
        unordered_map<string,bool>hmap;
        
        for(auto x:s1){
            string temp="";
            for(int i=0;i<x.size();i++){
                temp+=x[i];
                hmap[temp]=true;
            }
            temp="";
            for(int i=x.size()-1;i>=0;i--){
                temp=x[i]+temp;
                hmap[temp]=true;
            }
        }
        int ans=0;
        for(auto x:s2){
            if(hmap[x]){
                ans++;
            }
        }
        return ans;
    }