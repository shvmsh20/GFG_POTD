void solve(int index, int currSeg, int n, string curr, string &s, vector<string> &res){
        if(currSeg>4){
            if(index==n){
                res.push_back(curr);
            }
            return;
        }
        if(index>= n){
            return;
        }
        for(int i=1; i<=3; i++){
            string seg = s.substr(index,i);
            int segInt = stoi(seg);
            if(segInt>255){
                return;
            }
            if(seg[0]=='0' && i>1){
                return;
            }
            string newCurr = curr.size() ? curr+"."+seg : seg;
            solve(index+i, currSeg+1, n, newCurr, s, res);
        }
    }
    vector<string> generateIp(string &s) {
        // code here
        vector<string> res;
        int n = s.size();
        string curr = "";
        solve(0, 1, n, curr, s, res);
        return res;
    }