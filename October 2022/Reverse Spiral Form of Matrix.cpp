vector<int> reverseSpiral(int r, int c, vector<vector<int>>&a)  {
        // code here
        vector<int> res;
        int top = 0, bottom = r-1, left = 0, right = c-1;
        int d=0;
        while(top<=bottom && left<=right){
            if(d==0){
                for(int i=left; i<=right; i++){
                    res.push_back(a[top][i]);
                }
                top++;
                d=1;
            }
            if(d==1 && top<=bottom && left<=right){
                
                for(int i=top; i<=bottom; i++){
                    res.push_back(a[i][right]);
                }
                right--;
                d=2;
            }
            if(d==2 && top<=bottom && left<=right){
                for(int i=right; i>=left; i--){
                    res.push_back(a[bottom][i]);
                }
                bottom--;
                d=3;
            }
            if(d==3 && top<=bottom && left<=right){
                for(int i=bottom; i>=top; i--){
                    res.push_back(a[i][left]);
                }
                
                left++;
                d=0;
            }
        }
       reverse(res.begin(), res.end());
        return res;
    }