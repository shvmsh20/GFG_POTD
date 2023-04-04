int knightInGeekland(int start_x,int start_y,vector<vector<int>> &arr){
     
         int xp[8]={-2,-2,2,2,-1,-1,1,1};
        int yp[8]={-1,1,-1,1,2,-2,2,-2};
        int r=arr.size(),c=arr[0].size();
        vector<vector<bool>>vis(r,vector<bool>(c,0));
        vis[start_x][start_y]=1;
        queue<pair<int,int>>q;
        q.push({start_x,start_y});
        
        vector<int>points(1e3,0);
        int steps=0;
          
        while(!q.empty()){
            int qs=q.size();
            while(qs--){
                int x=q.front().first;
                int y=q.front().second;
                points[steps]+=arr[x][y];
                for(int i=0;i<8;i++){
                    int cx=x+xp[i];
                    int cy=y+yp[i];
                   if( ((cx>=0 && cx<r) && (cy>=0 && cy<c)) && !vis[cx][cy]){    
                        vis[cx][cy]=1;
                        q.push({cx,cy});
                    }
                }
                q.pop();
            }
            steps++;
        }
      
        int ns,m1=INT_MIN,n=points.size();
        
        for(int i=0;i<n;i++){
            int curr=i;
            int tp=0;
            while(curr<=n){
                if(points[curr]==0)
                    break;
                tp+=points[curr];
                curr+=points[curr];
            }
            points[i]=tp;
            if(points[i]>m1){
                m1=points[i];
                ns=i;
            }
        }
        return ns;
    }