int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
        // code here
        if(A[0][0]==0){
            return -1;
        }
        if(X==0 && Y==0){
            return 0;
        }
        queue<pair<int, int>> q;
        q.push({0, 0});
        A[0][0]=-1;
        int res = 0;
        int dx[4] = {0, 1, 0, -1};
        int dy[4] = {1, 0, -1, 0};
        while(!q.empty()){
            int n = q.size();
            for(int i=0; i<n; i++){
                pair<int, int> p = q.front();
                q.pop();
                int x = p.first, y = p.second;
                for(int j=0; j<4; j++){
                    int nx = x+dx[j];
                    int ny = y+dy[j];
                    if(nx>=0 && nx<N && ny>=0 && ny<M && A[nx][ny]==1){
                        if(nx==X && ny==Y){
                            return res+1;
                        }
                        A[nx][ny] = -1;
                        q.push({nx, ny});
                    }
                }
            }
            res++;
        }
        return -1;
    }