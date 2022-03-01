long long countPairs(int n, int X, vector<int> numbers){
        // code here
        long long ans=0;
        unordered_map<string, int> mp;
        for(int i=0; i<n; i++){
            mp[to_string(numbers[i])]++;
        }
        string x = to_string(X);
        for(int i=1; i<x.size(); i++){
            string first = x.substr(0, i);
            string second = x.substr(i);
            if(first==second){
                ans = ans + (mp[first]*(mp[first]-1));
            }else{
                ans = ans + mp[first]*mp[second]; 
            }
            
        }
        return ans;
    }