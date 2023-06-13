vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    vector<int> res(k);
	    priority_queue<int, vector<int>, greater<int>> pq;
	    for(int i=0; i<n; i++){
	        if(pq.size()<k){
	            pq.push(arr[i]);
	        }else if(arr[i]>pq.top()){
	            pq.pop();
	            pq.push(arr[i]);
	        }
	    }
	    while(!pq.empty()){
	        res[k-1] = pq.top();
	        pq.pop();
	        k--;
	    }
	    return res;
	}