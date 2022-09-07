int isStackPermutation(int n,vector<int> &A,vector<int> &B){
        int i=0, j=0;
        stack<int> st;
        while(j<n){
            while(i<n && (st.empty() || st.top()!=B[j])){
                st.push(A[i]);
                i++;
            }
            while(!st.empty() && st.top()==B[j]){
                j++;
                st.pop();
            }
            if(i==n && !st.empty()){
                return 0;
            }
        }
        return 1;
    }