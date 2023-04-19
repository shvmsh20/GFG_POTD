bool wifiRange(int N, string S, int X){
        // code here
         int wifi[N]={0}; //To mark room has access to wifi //or not
        for(int i=0; i<N; i++){
            if(S[i]-'0' == 1){
                for(int j=0; j<=X; j++){
                    if(i+j < N)
                    wifi[i+j] = 1;
                }
                for(int j=0; j<=X; j++){
                    if(i>=j)
                    wifi[i-j] = 1;
                }
            }
        }int flag=1;
        for(int i=0; i<N; i++){
            if(wifi[i]!=1){
                flag = 0;
            }
        }
        if(flag ==1)
        return true;
        else
        return false;
    }