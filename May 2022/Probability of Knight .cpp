double findInBoardCount(int N, int x, int y, int K, vector<vector<vector<double>>>& lookup){
        double count = 0;
        if (x >= 0 && x < N && y >= 0 && y < N) //Inside board
        {
            if (lookup[x][y][K] != -1)
                return lookup[x][y][K];
                
            if (K == 0)
                return 1;
            //1
            count += findInBoardCount(N, x-2, y-1, K-1, lookup);
            //2
            count += findInBoardCount(N, x-2, y+1, K-1, lookup);
            //3
            count += findInBoardCount(N, x+2, y-1, K-1, lookup);
            //4
            count += findInBoardCount(N, x+2, y+1, K-1, lookup);
            //5
            count += findInBoardCount(N, x-1, y-2, K-1, lookup);
            //6
            count += findInBoardCount(N, x-1, y+2, K-1, lookup);
            //7
            count += findInBoardCount(N, x+1, y-2, K-1, lookup);
            //8
            count += findInBoardCount(N, x+1, y+2, K-1, lookup);
            lookup[x][y][K] = count;
        }
        return count;
    }
	double findProb(int N,int start_x, int start_y, int steps)
	{
	    // Code here
	    vector<vector<vector<double>>> lookup(N, vector<vector<double>>(N, vector<double>(steps+1, -1)));
        double count=0;
        
        count = findInBoardCount(N, start_x, start_y, steps, lookup);
        double ans = (double)count/pow(8, steps);
        return ans;
	}