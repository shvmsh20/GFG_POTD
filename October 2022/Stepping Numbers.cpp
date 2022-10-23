void dfs(int curr,int n,int m,int &ans)

    {

        if(curr>m) return;

        if(curr>=n && curr<=m) ans++;

        int last_digit=curr%10;

        if(last_digit==9) dfs(curr*10+8,n,m,ans);

        else if(last_digit==0) dfs(curr*10+1,n,m,ans);

        else{

            dfs(curr*10+(last_digit+1),n,m,ans);

            dfs(curr*10+(last_digit-1),n,m,ans);

        }

    }
    int steppingNumbers(int n, int m)
    {
        // Code Here
        int ans=0;

        if(n==0) ans++;

        for(int i=1;i<=9;i++)

        {

            dfs(i,n,m,ans);

        }

        return ans;
    }
};