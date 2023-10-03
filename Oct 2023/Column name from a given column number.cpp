string colName (long long int n)
    {
        // your code here
        string s="";
        while(n>0)
        {
            long long x=n%(26*1LL);
            n=n/(26*1LL);
            string c="";
            if(x==0)
            {
                c="Z";
                n--;
            }
            else
            {
                char b='A'+(x-1);
                c=b;
            }
            s=c+s;
        }
        return s;
    }