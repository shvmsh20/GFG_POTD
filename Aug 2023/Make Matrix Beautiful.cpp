int max_row_sum(vector<vector<int>> &mat)
    {
        int sum=0,max=INT_MIN,i,j;
        for(i=0; i<mat.size(); i++)
        {
            sum=0;
            for(j=0; j<mat[i].size(); j++)
            {
                sum+=mat[i][j];
            }
            if(sum > max)
            {
                max=sum;
            }
        }
        return max;
    }
    int max_col_sum(vector<vector<int>> &mat)
    {
        int sum=0,max=INT_MIN,i,j;
        for(i=0; i<mat.size(); i++)
        {
            sum=0;
            for(j=0; j<mat[i].size(); j++)
            {
                sum+=mat[j][i];
            }
            if(sum > max)
            {
                max=sum;
            }
        }
        return max;
    }
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        int i,j,sum=0,ans,res=0,rmaxi,cmaxi,m=INT_MIN,m1,m2;
        rmaxi=max_row_sum(matrix);
        cmaxi=max_col_sum(matrix);
        m1=max(rmaxi,cmaxi);
        m2=max(m,m1);
        for(i=0; i<matrix.size(); i++)
        {
            sum=0;
            for(j=0; j<matrix[i].size(); j++)
            {
                sum+=matrix[i][j];
            }
            ans=m2-sum;
            res+=ans;
        }
        return res;
    } 