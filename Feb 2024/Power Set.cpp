void solve(int index, int n, string temp, string &s, vector<string> &res){
	        if(index==n){
	            if(temp.length()) 
	            {
	                res.push_back(temp);
	            }
	            return;
	        }
	        // do not take s[index]
	        solve(index+1, n, temp, s, res);
	        temp+= s[index];
	        solve(index+1, n, temp, s, res);
	    }
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string> res;
		    int n = s.length();
		    string temp;
		    solve(0, n, temp, s, res);
		    sort(res.begin(), res.end());
		    return res;
		}