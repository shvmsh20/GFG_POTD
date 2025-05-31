struct cmp{
        bool operator()(vector<int> &v1, vector<int> &v2){
            return v1[0]>v2[0];
        }
    };
    int kthSmallest(vector<vector<int>> &matrix, int k) {
        // code here
        priority_queue<vector<int>, vector<vector<int>>, cmp>pq;
        int n = matrix.size();
        for(int i=0; i<n; i++){
            pq.push({matrix[i][0], i, 0});
        }
        int cnt = 0;
        while(true){
            vector<int> v = pq.top();
            pq.pop();
            cnt++;
            if(cnt==k){
                return v[0];
            }
            if(v[2]+1<n){
                pq.push({matrix[v[1]][v[2]+1], v[1], v[2]+1});
            }
            
        }
        return -1;
    }