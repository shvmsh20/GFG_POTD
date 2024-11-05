void rotate(vector<vector<int> >& mat) {
    // Your code goes here
   int n=mat.size();
    int m=mat[0].size();
    vector<vector<int>>ans(n,vector<int>(m,0));
   
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int val=mat[i][j];
            ans[j][n-1-i]=val;
        }
    }
    mat=ans;
}