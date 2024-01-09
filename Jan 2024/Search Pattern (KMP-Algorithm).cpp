void fillLPS(string &p, vector<int> &lps){
            int n = p.length();
            int i=1, len=0;
            while(i<n){
                if(p[i]==p[len]){
                    len++;
                    lps[i] = len;
                    i++;
                }else{
                    if(len==0){
                        i++;
                    }else{
                        len = lps[len-1];
                    }
                }
            }
        }
        vector <int> search(string pat, string txt)
        {
            //code hee.
            vector<int> res;
            int m = pat.length(), n = txt.length();
            vector<int> lps(m, 0);
            fillLPS(pat, lps);
            int i=0, j=0;
            while(i<n){
                if(txt[i]==pat[j]){
                    i++;
                    j++;
                }
                if(j==m){
                    res.push_back(i-j+1);
                    j = lps[j-1];
                }else if(i<n && txt[i]!=pat[j]){
                    if(j==0){
                        i++;
                    }else{
                        j = lps[j-1];
                    }
                }
            }
            return res;
        }