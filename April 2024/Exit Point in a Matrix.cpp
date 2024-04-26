vector<int> FindExitPoint(int n, int m, vector<vector<int>>& matrix) {
        // Code here
        int choice=0;
        int i=0,j=0;
        int x,y;
        while((i<n && i>=0)&&(j<m && j>=0)){
            if(matrix[i][j]==1){
                choice=(choice+1)%4;
                matrix[i][j]=0;
            }
            x=i;
            y=j;
            switch(choice){
                case 0: j+=1;
                break;
                case 1:i+=1;
                break;
                case 2:j-=1;
                break;
                case 3:i-=1;
                break;
            }
        }
        
        return{x,y};
    }