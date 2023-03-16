string secondSmallest(int S, int D){
        // code here 
        string smallest = "";
        if(S>=D*9 || D==1) return "-1";
        for(int i=0; i<D; i++){        // get the smallest number
            if(S>(D-i-1)*9){
                smallest+= to_string(S-(D-i-1)*9);
                S-=S-(D-i-1)*9;
            }
            else{
                if(i==0){
                    smallest+="1";
                    S-=1;
                }
                else{
                    smallest+="0";
                }
            }
        }
        if(smallest[D-1]=='0' || smallest[0]=='9') return "-1";
        // check for  double 9
        int i = D-1;
        while(smallest[i]=='9' && smallest[i-1]=='9') i--;
        smallest[i]-=1;
        smallest[i-1]+=1;
        return smallest;
    }