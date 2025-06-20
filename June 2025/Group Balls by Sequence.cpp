ool validgroup(vector<int> &arr, int k) {
        // code here
        
        int n=arr.size();
        
        
        if(n%k!=0){
            
            return false;
        }
        
        
        int maxi=*max_element(arr.begin(),arr.end());
        
        int mini=*min_element(arr.begin(),arr.end());
        
        
        unordered_map<int,bool>mpp;
        
        
        for(int i=0;i<n;i++){
            
            mpp[arr[i]]=true;
        }
        
           for(int i=mini;i<=maxi;){
            
           
           if(mpp[i]==true){ 
         
         int j=i;
       
         while(j<=maxi && mpp[j]!=false){
             
             
             mpp[j]=false;
             j++;
             
             
             
             
          }
                
            
        
            
            int size=j-i;
            
          
          
            if(size!=0 && size%k!=0 ){
                
                return false;
            }
            
            
            
            i=j;
            
           }
           
        
           
           else{
               
               i++;
           }

    }
            
        return true;
    }