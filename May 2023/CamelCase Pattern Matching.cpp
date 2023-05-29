vector<string> CamelCase(int N, vector<string> Dictionary, string Pattern) {
        // code here
         vector<string> ans;
        
        for(int i=0; i<N; i++) {
            string temp;
            for(int j=0; j<Dictionary[i].size(); j++) {
                if(isupper(Dictionary[i][j])) {
                    temp.push_back(Dictionary[i][j]);
                }
                
                if(temp == Pattern) {
                    ans.push_back(Dictionary[i]);
                    break;
                }
            }
        }
        
        if(ans.size()) {
            return ans;
        }
        else {
            return {"-1"};
        }
        
    }