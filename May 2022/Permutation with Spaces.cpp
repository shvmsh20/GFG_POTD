ic:
    void solve(string s, int index, int n, string temp, vector<string> &res){
        if(index==n){
            res.push_back(temp);
            return;
        }
        string s1 = temp+' ', s2 = temp;
        s1.push_back(s[index]);
        s2.push_back(s[index]);
        solve(s, index+1, n, s1, res);
        temp.pop_back();
        solve(s, index+1, n, s2, res);
    }
    vector<string> permutation(string S){
        // Code Here
        int n = S.size();
        vector<string> res;
        string temp="";
        temp.push_back(S[0]);
        solve(S, 1, n, temp, res);
        return res;
    }