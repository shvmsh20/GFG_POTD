bool check(string a, string b){
       string s = a+b;
       int n = s.size();
       int i=0, j=n-1;
       while(i<j){
           if(s[i]!=s[j]){
               return false;
           }
           i++;
           j--;
       }
       return true;
   }
    bool palindromePair(vector<string>& arr) {
        // Code here
        int n = arr.size();
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==j) continue;
                if(check(arr[i], arr[j])){
                    return true;
                }
            }
        }
        return false;
    }