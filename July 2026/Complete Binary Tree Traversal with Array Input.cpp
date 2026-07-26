 vector<vector<int>> levelSort(vector<int>& arr) {
        // code here
         vector<vector<int>> ans;
      queue<int> q;
      
      int n=arr.size();
      
      q.push(0);
      while(!q.empty()){
        
        int qn=q.size();
        vector<int> temp;
        
        while(qn--){
          int i=q.front(); q.pop();
          temp.push_back(arr[i]);
          
          if((2*i+1) < n) q.push(2*i+1);
          if((2*i+2) < n) q.push(2*i+2);
          
        }
        
        sort(temp.begin(), temp.end());
        ans.push_back(temp);  
      }
      
      return ans;
    }