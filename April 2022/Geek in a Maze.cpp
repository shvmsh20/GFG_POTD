int numberOfCells(int n, int m, int r, int c, int u, int d, vector<vector<char>> &mat)
	{
		// Your code goes here
		if (mat[r][c] == '#')
	    return 0;
    	
        vector<int> d_c = {1, -1, 0, 0};
        vector<int> d_r = {0, 0, 1, -1};
        vector<int> d_d = {0, 0, -1, 0};
        vector<int> d_u = {0, 0, 0, -1};
        	
        queue<vector<int>> que;
        int cnt = 0;
        
        mat[r][c] = '#';
        que.push({r, c, u, d});
        
        while (que.size())
        {
        	auto &f = que.front();
        	int rr = f[0];
        	int cc = f[1];
        	int uu = f[2];
        	int dd = f[3];
        	que.pop();
        	
        	++ cnt;
        	
        	for (int i = 0; i < 4; ++i)
        	{
        		int rrr = rr + d_r[i];
        		int ccc = cc + d_c[i];
        		int ddd = dd + d_d[i];
        		int uuu = uu + d_u[i];
        		
        		if (0 <= rrr && rrr < n &&
        			0 <= ccc && ccc < m &&
        			mat[rrr][ccc] == '.' &&
        			ddd >= 0 && uuu >= 0)
        		{
        			mat[rrr][ccc] = '#';
        			que.push({rrr, ccc, uuu, ddd});
        		}
        	}
        }
        
        return cnt;
    	}