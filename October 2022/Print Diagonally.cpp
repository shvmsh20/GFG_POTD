ector<int> downwardDigonal(int N, vector<vector<int>> A)
	{
		// Your code goes here
		vector<int> res;
		for(int k=0; k<N; k++){
		    int i=0, j=k;
		    while(i<N && j>=0){
		        res.push_back(A[i][j]);
		        i++;
		        j--;
		    }
		}
		for(int k=1; k<N; k++){
		    int i = k, j = N-1;
		    while(i<N && j>=0){
		        res.push_back(A[i][j]);
		        i++;
		        j--;
		    }
		}
		return res;
	}