int majorityElement(vector<int>& arr) {
        // code here
         int leader = -1;
        int count = 0;
        
        int n = arr.size();
        for(int i=0;i<n;i++){
            if(count == 0){
                count++;
                leader = arr[i];
            }
            else if(leader == arr[i])
                count++;
            else    
                count--;
        }
        
        count = 0;
        for(int i=0;i<n;i++){
            if(arr[i] == leader)
                count++;
        }
        
        return (count>(n/2))?leader : -1;
    }