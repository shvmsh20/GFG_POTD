int checkCompressed(string S, string T) {
        // code here
        int i = 0;
        int j = 0;
        
        while(i < S.size() && j < T.size()){
            if(S[i] == T[j]){
                i++;
                j++;
            }
            else if(isdigit(T[j])){
                string deletedCount = "";
                while(j < T.size() && isdigit(T[j])){
                    deletedCount.push_back(T[j]);
                    j++;
                }
                
                i += stoi(deletedCount);
            }
            else{
                return 0;
            }
        }
        
        if(i == S.size() && j == T.size())
            return 1;
            
        return 0;
    }