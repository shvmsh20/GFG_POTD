int maxLength(vector<int> &arr,int n){
           //code here
            int strt=0,i=0,cnt=0,first=0,last=0,ans=INT_MIN;
           while(i<n)
           {
                if(arr[i]==0)
                {
                    if(cnt%2==0)
                        ans=max(ans,i-strt);
                    else
                        ans=max(ans,max(i-first-1,last-strt));
                
                    cnt=0;
                    strt=i+1;
                }
                else if(arr[i]<0)
                {
                    if(cnt==0)
                        first=i;
                    last=i;
                    cnt++;
                }
                if(i==n-1 && arr[i]!=0)
                {
                    if(cnt%2==0)
                        ans=max(ans,i-strt+1);
                    else
                        ans=max(ans,max(i-first,last-strt));
                }
                i++;
           }
           return ans;
        }