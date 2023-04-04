int util(int val, int l, int h, vector<int> &v){
        if(l<=h){
            int m = l+(h-l)/2;
            if(v[m]<val){
                return util(val, m+1, h, v);
            }else{
                return util(val, l, m-1, v);
            }
        }
        return l;
    }
	vector<int> constructLowerArray(int *arr, int n) {
	    // code here
	    vector<int> res(n);
	    res[n-1] = 0;
	    vector<int> v;
	    v.push_back(arr[n-1]);
	    for(int i=n-2; i>=0; i--){
	        int index = util(arr[i], 0, v.size()-1, v);
	        res[i] = index;
	        v.insert(index+v.begin(), arr[i]);
	    }
	    return res;
	}