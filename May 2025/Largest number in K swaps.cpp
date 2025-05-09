void solve(string str, int k, int n, int index, string &sol){
        if(k==0){
            return;
        }
        char maxChar = str[index];
        for(int i = index+1; i<n; i++){
            if(str[i]>maxChar){
                maxChar = str[i];
            }
        }
        if(maxChar!=str[index]){
            k--;
        }
        
        for(int i=n-1;i>=index;i--){
           if(maxChar==str[i]){
               swap(str[i], str[index]);
                if(str>sol){
                    sol = str;
                }
               solve(str, k, n, index+1, sol);
               swap(str[i], str[index]);
           } 
        }
    }
    string findMaximumNum(string str, int k)
    {
       // code here.
       string sol;
       int n = str.size();
       solve(str, k, n, 0, sol);
       return sol;
    }