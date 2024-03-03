static bool cmp(string &s1, string &s2){
	    string x = s1+s2;
	    string y = s2+s1;
	    if(x>y){
	        return 1;
	    }else{
	        return 0;
	    }
	}
	string printLargest(int n, vector<string> &arr) {
	    // code here
	    sort(arr.begin(), arr.end(), cmp);
	    string res;
	    for(string x: arr){
	        res+= x;
	    }
	    return res;
	}