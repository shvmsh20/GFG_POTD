int numberOfSubsequences(string S, string W){
        // code here 
        int res = 0, sz = W.size();
    vector<bool> visited(S.size() + 1, false);
    for(int x = 0; x < S.size(); x++){
        int y = x, ct = 0;
        for(y = x, ct = 0; y < S.size() and ct < sz; y++){
            if(visited[y] == false and W[ct] == S[y]){
                visited[y] = true;
                ct++;
            }
        }
        if(ct == sz){
            res++;
        }
    }
    return res;
    }