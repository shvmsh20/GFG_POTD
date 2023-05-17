int isPossible(int n, int m, string s){
        // code here
        int vMin = 0, vMax =0, hMin = 0, hMax = 0, v=0, h=0 ;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='L'){
                h--;
                hMin = min(h, hMin);
            }else if(s[i]=='R'){
                h++;
                hMax = max(h, hMax);
            }else if(s[i]=='U'){
                v++;
                vMax = max(v, vMax);
            }else if(s[i]=='D'){
                v--;
                vMin = min(v, vMin);
            }
        }
        return (vMax-vMin<n) && (hMax-hMin<m);
    }