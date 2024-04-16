nt minimizeDifference(int n, int k, vector<int> &arr) {
        // code here
        deque<int>d1;
         deque<int>d2;
         
         for(int i=k;i<n;i++){
             
             while(!d1.empty()&&arr[i]>d1.back()){
                  d1.pop_back();
             }
             
              while(!d2.empty()&&arr[i]<d2.back()){
                  d2.pop_back();
             }
             
             d1.push_back(arr[i]);
             d2.push_back(arr[i]);
         }
         
         
         
         int ans=d1.front()-d2.front();
         
         
         int j=0;
         
         for(int i=k;i<n;i++){
             
             if(d1.front()==arr[i]){
                 d1.pop_front();
             }
             
             if(d2.front()==arr[i]){
                 d2.pop_front();
             }
             
                   while(!d1.empty()&&arr[j]>d1.back()){
                  d1.pop_back();
             }
             
              while(!d2.empty()&&arr[j]<d2.back()){
                  d2.pop_back();
             }
             
             d1.push_back(arr[j]);
             d2.push_back(arr[j]);
             j++;
             
             ans=min(ans,d1.front()-d2.front());
             
         }
         
         return ans;
    }