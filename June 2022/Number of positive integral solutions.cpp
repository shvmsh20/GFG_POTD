long posIntSol(string str)
    {
        int n=str.size(), var=0, sum=0;
        string _sum="";
        for(int i=0;i<n;i++){
            if(str[i]>='a' && str[i]<='z')
                var++;
            else if(str[i]=='='){
                i++;
                while(i<n){
                    _sum+=str[i++];
                }
            }
        }
        sum=stoi(_sum);

        long ans;
        sum-=var;
        if(sum>=0){
            long a=var-1,b=sum;
            sum+=a;
            if(a<b) swap(a,b);
            long sum_f=1,b_f=1;
            for(int i=a+1;i<=sum;i++)
                sum_f*=i;
            for(int i=1;i<=b;i++)
                b_f*=i;
            ans=sum_f/b_f;
        }
        else
            ans=0;
        
        return ans;

    }