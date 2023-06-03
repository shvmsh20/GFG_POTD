int maxEqualSum(int N1,int N2,int N3,vector<int> &a,vector<int> &b,vector<int> &c){
        int sum1=0,sum2=0,sum3=0;
        
        for(int i=0;i<a.size();i++) sum1+=a[i];
        for(int i=0;i<b.size();i++) sum2+=b[i];
        for(int i=0;i<c.size();i++) sum3+=c[i];
        
        int i=0,j=0,k=0;
        
        int mini=min(sum1,min(sum2,sum3));
        
        while(i!=a.size() && j!=b.size() && k!=c.size()){
            
            if(sum1==sum2 && sum1==sum3) return sum1;
            if(mini>sum1) mini=sum1;
            if(mini>sum2) mini=sum2;
            if(mini>sum3) mini=sum3;

            if(mini<sum1){
                sum1-=a[i];
                i++;
            }
            if(mini<sum2){
                sum2-=b[j];
                j++;
            }
            if(sum3>mini){
                sum3-=c[k];
                k++;
            }
        }
        
        return 0;
    }