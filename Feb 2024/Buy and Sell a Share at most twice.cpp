int maxProfit(vector<int>&price){
            //Write your code here..
             int n = price.size();
            if(n==1)
            {
                return 0;
            }
            else if(n==2)
            {
                int ans = price[1]-price[0];
                if(ans<=0)
                {
                    return 0;
                }
                else
                {
                    return ans;
                }
            }
            vector<int>leri(n);
            vector<int>rile(n);
            int mini = price[0];
            leri[0] = 0;
            for(int i = 1; i < n; i++)
            {
                mini = min(mini,price[i]);
                leri[i] = max(leri[i-1],price[i]-mini);
            }
            int maxi = price[n-1];
            rile[n-1] = 0;
            for(int i = n-2; i>=0; i--)
            {
                maxi = max(maxi,price[i]);
                rile[i] = max(rile[i+1],maxi-price[i]);
            }
            int ans = 0;
            for(int i = 0; i < n; i++)
            {
                if(i==0)
                {
                    ans = max(ans,leri[i]+rile[i+1]);
                }
                else if(i==n-1)
                {
                    ans = max(ans,leri[i]);
                }
                else
                {
                    ans = max(ans,leri[i]+rile[i+1]);
                }
            }
            return ans;
        }