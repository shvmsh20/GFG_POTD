int isItPossible(string S, string T, int M, int N) {
        // code here
        if(M!=N) return 0;
        string S1="",S2="";
        for(int i=0;i<S.size();i++){
            if(S[i]!='#'){
                S1+=S[i];
            }
        }
        
          for(int i=0;i<T.size();i++){
            if(T[i]!='#'){
                S2+=T[i];
            }
        }
        return (int)(S1==S2);
    }