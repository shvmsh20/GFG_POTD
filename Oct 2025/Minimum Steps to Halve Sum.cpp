int minOperations(vector<int>& arr) {
        // code here
         int n=arr.size();
        double sum=accumulate(arr.begin(),arr.end(),0);
        double S=sum/2.0;
        priority_queue<double> pq;
        for(int i=0;i<n;i++){
            pq.push(arr[i]);
        }
        int op=0;
        while(sum>S){
            double top=pq.top(); 
            pq.pop();
            pq.push(top/2.0);
            sum=sum-(top/2.0); 
            op++;
        }
        return op;
    }