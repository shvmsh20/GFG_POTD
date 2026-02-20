static bool cmp(string a, string b){
        return a+b > b+a;
    }
    string findLargest(vector<int> &arr) {
        // code here
        vector<string> v;
        int n = arr.size();
        for(int i=0; i<n; i++){
            v.push_back(to_string(arr[i]));
        }
        sort(v.begin(), v.end(), cmp);
        string res = "";
        for(int i=0; i<n; i++){
            res+= v[i];
        }
        if(res[0]=='0') return "0";
        return res;
    }