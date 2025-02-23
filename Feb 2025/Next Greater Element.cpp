vector<int> nextLargerElement(vector<int>& arr) {
        // code here
         int n=arr.size();
       stack<int>st;
       vector<int>result(n,-1);
       for(int i=0;i<n;i++){
           while(!st.empty() && arr[st.top()]<arr[i]){
            result[st.top()]=arr[i];
             st.pop();
           }
       st.push(i);
       }
       return result;
    }