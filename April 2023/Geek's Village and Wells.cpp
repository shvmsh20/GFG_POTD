vector<vector<int>> chefAndWells(int n,int m,vector<vector<char>> &c){
        // Code here
        vector<vector<int>>vis(n,vector<int>(m));
        vector<vector<int>>ans(n,vector<int>(m,-1));
        queue<pair<int,pair<int,int>>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(c[i][j]=='W'){
                    q.push({0,{i,j}});
                    ans[i][j]=0;
                    vis[i][j]=1;
                }
            }
        }
        int tr[]={0,-1,0,1};
        int tc[]={-1,0,1,0};
        while(!q.empty()){
            int noder=q.front().second.first;
            int nodec=q.front().second.second;
            int dis=q.front().first;
            q.pop();
            for(int i=0;i<4;i++){
                int ttr=noder+tr[i];
                int ttc=nodec+tc[i];
                if(ttr>=0&&ttc>=0&&ttr<n&&ttc<m
                &&!vis[ttr][ttc]&&(c[ttr][ttc]=='H'||c[ttr][ttc]=='.')){
                    q.push({dis+1,{ttr,ttc}});
                    ans[ttr][ttc]=2*(dis+1);
                    vis[ttr][ttc]=1;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(c[i][j]=='.'||c[i][j]=='N'){
                    ans[i][j]=0;
                }
            }
        }
        return ans;
    }