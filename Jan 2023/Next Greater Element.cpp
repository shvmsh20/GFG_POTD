vector<long long> nextLargerElement(vector<long long> &arr, int n){
        // Your code here
         stack<long long> st;

        vector<long long> ans;

        ans.push_back(-1);

        st.push(arr[n-1]);

        

        for(int i=n-2;i>=0;--i){

            if(st.size() && st.top()>arr[i]){

                ans.push_back(st.top());

                st.push(arr[i]);

            }

            else if(st.size()==0){

                ans.push_back(-1);

                st.push(arr[i]);

            }

            else{

                while(st.size() && st.top()<arr[i]){

                    st.pop();

                }

                if(st.size()){

                    ans.push_back(st.top());

                    st.push(arr[i]);

                }

                else{

                    ans.push_back(-1);

                    st.push(arr[i]);

                }

            }

        }

        reverse(ans.begin(), ans.end());

        return ans;
    }