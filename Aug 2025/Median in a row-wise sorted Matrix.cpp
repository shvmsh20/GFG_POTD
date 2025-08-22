int solve(vector<vector<int>> &mat, int mid ) {
         
          
               int n = mat.size();
               int m= mat[0].size();
              
                 int smalle =0;
                
                for(int i=0;i<n;i++){
                      
                           int low = 0;
                           int high = m-1;
                           int idx = m;           
                           while (low<=high){
                               
                                  int mid2 = low + (high-low)/2;
                                 
                                  if (mat[i][mid2]<=mid){
                            
                                       low = mid2+1;
                                 }
                                 else{ 
                                      
                                      idx =mid2; 
                                      high =mid2 -1;
                                 }
                                 
                           }
                            
                            
                            // cout<<idx<<" ";
                           // 4 7 5 9 
                           smalle+=idx;
                         
                }
                
                // cout<<endl;
                return smalle;
                
                
                
            
        
    }
   
    int median(vector<vector<int>> &mat) {
        // code here
          
              int n = mat.size();
              int m= mat[0].size();
              
              int low = 0;int high = 0;
              for(int i=0;i<n;i++){
                        
                      low = min(mat[i][0],low);  
                      high = max(mat[i][m-1],high);  
                     
              }
              
            //  cout<<low<<" "<<high;
              
              int x = (n*m)/2;
              while (low<=high){
                   
                     
                       int mid = low + (high-low)/2;
                       
                       int smalle = solve(mat, mid );
                       
                    //   cout<<mid<<" "<<smalle<<endl;
                       if (smalle<=x){
                            low = mid+1;
                       }
                       else{
                            high = mid -1;
                       }
                            
                       
                     
              }
              
              
              return low;
              
              
          
          
        
    }