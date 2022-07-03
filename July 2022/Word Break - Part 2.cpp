void util(int ind, int n, string &s, unordered_set<string> &mp, vector<string> &temp, vector<string> &res){
        if(ind==n && !temp.empty()){
            string ans = temp[0];
            for(int i=1; i<temp.size(); i++){
                ans+= ' ';
                ans+= temp[i];
            }
            res.push_back(ans);
            return;
        }
        for(int i=ind; i<n; i++){
            string chck = s.substr(ind, i-ind+1);
            if(mp.find(chck)!=mp.end()){
                temp.push_back(chck);
                util(i+1, n, s, mp, temp, res);
                temp.pop_back();
            }
        }
        
    }
    vector<string> wordBreak(int n, vector<string>& dict, string s)
    {
        // code here
        unordered_set<string> mp;
        for(string x: dict){
            mp.insert(x);
        }
        vector<string> temp;
        vector<string> res;
        int size = s.size();
        util(0, size, s, mp, temp, res);
        return res;
    }