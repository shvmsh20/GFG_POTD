//M-1
string sevenSegments(string S, int N) {
        // code here
         S = S.substr(0, N);
        int segment[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 5};
        int cnt = 0;
        for(auto i:S){
            cnt += segment[i-'0'];
        }
        string x = "" ;
        for(int i = N-1; i>=0;i--){
            for(int j=0; j<10; j++){
               if(cnt-segment[j]>=2*i && cnt-segment[j]<=7*i){
                   x += (j+'0');
                   cnt -= segment[j];
                   break;
               }
            }
        }
        return x;
    }

//M-2
string sevenSegments(string S, int N) {
        // code here
        vector<int> v = {6,2,5,5,4,5,6,3,7,5};
        string ans="";
        int count=0;
        for(int i=0; i<S.size(); i++){
            count+= v[S[i]-'0'];
        }
        vector<int> output(N, 2);
        count-= 2*N;
        int i=0;
        while(i<N && count>=4){
            count-=4;
            output[i++] = 6;
        }
        
        i=N-1;
        while(count>0){
            if(count>7-output[i]){
                output[i]=7;
                count-= 7-output[i];
                i--;
            }else{
                output[i]+=count;
                count=0;
            }
        }
        for(int i=0; i<N; i++){
            switch(output[i]){
                case 2:
                    ans+= "1";
                    break;
                case 3:
                    ans+= "7";
                    break;
                case 4:
                    ans+= "4";
                    break;
                case 5:
                    ans+= "2";
                    break;
                case 6:
                    ans+= "0";
                    break;
                case 7:
                    ans+= "8";
                    break;    
            }
        }
        return ans;
    }    