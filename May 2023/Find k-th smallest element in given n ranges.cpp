    int currElements = 0;
        for(int i=0; i<n; i++){
            if(k<=(currElements+range[i][1]-range[i][0]+1)){
                return range[i][0]+k-currElements-1;
            }
            currElements+= (range[i][1]-range[i][0]+1);
        }
        return -1;
    }
    vector<int>kthSmallestNum(int n, vector<vector<int>>&range, int q, vector<int>queries){
        //Write your code here
        sort(range.begin(), range.end());
        int currIndex = 0;
        for(int i=1; i<n; i++){
            int x = range[i][0];
            int y = range[i][1];
            if(range[currIndex][1]>=range[i][0]){
                range[currIndex][1] = max(range[currIndex][1], range[i][1]);
            }else{
                currIndex++;
                range[currIndex][0] = range[i][0];
                range[currIndex][1] = range[i][1];
            }
        }
        int sz = queries.size();
        vector<int> res(sz);
        
        for(int i=0; i<sz; i++){
            res[i] = solve(queries[i], range, currIndex+1);
        }
        return res;
    } 