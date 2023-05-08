int modulo(string s,int m)
        {
            //code here
            int res = 0;
    for(const auto& x: s){
        res = res*2 + (x-'0');
        res = res%m;
    }
    return res;
        }