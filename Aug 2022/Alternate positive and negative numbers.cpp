void rearrange(int arr[], int n) {
	    // code here
	    vector<int> pos;
	    vector<int> neg;
	    for(int i=0; i<n; i++){
	        if(arr[i]>=0){
	            pos.push_back(arr[i]);
	        }else{
	            neg.push_back(arr[i]);
	        }
	    }
	    int i=0, j=0, k=0;
	    while(i<pos.size() || j<neg.size()){
	        if(i<pos.size()) arr[k++] = pos[i++];
	        if(j<neg.size()) arr[k++] = neg[j++];
	    }
	}