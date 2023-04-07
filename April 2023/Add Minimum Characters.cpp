nt addMinChar(string str){    
        //code here
        int n = str.length(); 
    string rev = str; 
    reverse(rev.begin(), rev.end()); 
    string s = str + "#" + rev; 
    int lps = computeLPS(s); 
    return (n - lps); 
    }
    
int computeLPS(string s) 
{ 
    int n = s.length(); 
    int lps[n]; 
    lps[0] = 0; 
    int i = 1, j = 0; 
    while (i < n) 
    { 
        if (s[i] == s[j]) 
        { 
            lps[i] = j + 1; 
            i++; 
            j++; 
        } 
        else
        { 
            if (j != 0) 
                j = lps[j-1]; 
            else
            { 
                lps[i] = 0; 
                i++; 
            } 
        } 
    } 
    return lps[n-1]; 
    }