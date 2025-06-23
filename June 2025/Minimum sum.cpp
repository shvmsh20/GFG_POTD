string minSum(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<int>A1,A2;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            if(arr[i]!=0){
                if(i&1)
                A1.push_back(arr[i]);
                else
                A2.push_back(arr[i]);
            }
        }
        
        string ans="";
        
        int p=A1.size()-1,q=A2.size()-1,carry=0;
        while(p>=0 || q>=0 || carry>0){
            int a=0,b=0;
            if(p>=0)
            a=A1[p--];
            if(q>=0)
            b=A2[q--];
            
            int sum=a+b+carry;
            carry=sum/10;
            ans.push_back(sum%10+'0');
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }