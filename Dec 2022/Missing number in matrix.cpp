 long long int MissingNo(vector<vector<int> >& matrix) {
        // Code here
       
       
        int n = matrix.size();
        vector<long long int> rows(n), cols(n);
        long long int  d1 = 0, d2 = 0;
        bool flag1 = false;
        bool flag2 = false; 
        long long int sum, rIndex = -1, cIndex = -1;
        for(int i=0; i<n; i++){
            sum=0;
            for(int j=0; j<n; j++){
                if(i==j){
                    d1+= matrix[i][j];
                    if(matrix[i][j]==0){
                        flag1 = true;
                    }
                }
                if(j==(n-i-1)){
                    d2+= matrix[i][j];
                    if(matrix[i][j]==0){
                        flag2 = true;
                    }
                }
                if(matrix[i][j]==0){
                    rIndex = i;
                }
                sum+= matrix[i][j];
            }
            rows[i] = sum;
        }
        for(int j=0; j<n; j++){
            sum=0;
            for(int i=0; i<n; i++){
                if(matrix[i][j]==0){
                    cIndex = j;
                }
                sum+= matrix[i][j];
            }
            cols[j] = sum;
        }
        int nfr = 0;
        for(int i = 0; i<n; i++){
            if(i!=rIndex){
                nfr = i;
                break;
            }
        }
        long long int actual_sum = rows[nfr];
        long long int res = actual_sum - rows[rIndex];
        for(int i=0; i<n; i++){
            if(i!=rIndex && (res+rows[rIndex])!=rows[i]){
                return -1;
            }
        }
        for(int i=0; i<n; i++){
            if(i!=cIndex && (res+cols[cIndex])!=cols[i]){
                return -1;
            }
        }
        
        if(res<=0){
            return -1;
        } 
        if(flag1==false && flag2==false){
            return res;
        }   
        
        if(flag1 && flag2){
            return (d1==d2)? res: -1;
        }
        if(flag1){
            return (res+d1)==d2 ? res : -1;
        }
        if(flag2){
            return (res+d2)==d1 ? res: -1;
        }
        return -1;
    }