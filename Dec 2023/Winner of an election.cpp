vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        unordered_map<string, int> mp;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        string name;
        int mxVotes = 0;
        for(auto x: mp){
            if(x.second>mxVotes){
                mxVotes = x.second;
                name = x.first;
            }else if(x.second==mxVotes && name>x.first){
                name = x.first;
            }
        }
        vector<string> res = {name, to_string(mxVotes)};
        return res;
    }