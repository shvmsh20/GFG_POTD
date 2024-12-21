void rotateby90(int n, int mat[][n]) {
    // code here
     int iRow = n;      //size of arr(Row, Column)
        int arr[iRow][iRow];        //data backup purpose    
        
        for(int i = 0;i < iRow;i++)     //Copy all element's
        {
            for(int j = 0;j < iRow;j++)
            {
                arr[i][j] = mat[i][j];
            }
        }
        
        for(int i = 0;i < iRow;i++)     
        {
            for(int j = 0;j < iRow;j++)
            {
                mat[iRow-j-1][i] = arr[i][j];
            }
        }

        return;
}
