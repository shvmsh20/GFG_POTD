vector<int> nthRowOfPascalTriangle(int n) {
        // code here
       int rowIndex=n-1;
        vector<int>row(rowIndex+1,1);
        for (int i=1;i<rowIndex;++i) {
            row[i]=(long)row[i-1]*(rowIndex-i+1)/i;
        }
        return row;
    }