string buildLowestNumber(string num, int k)
{
    //code here.
    stack<char> st;

    for(int i=0; i<num.size(); i++){

        

            while(!st.empty() && st.top() > num[i] && k){

                st.pop();

                k--;

            }

        st.push(num[i]);

        

    }

    while(!st.empty() && k--) st.pop();

 

    string ans = "";

    while(!st.empty()){

        ans += st.top();

        st.pop();

    }

    while(ans[ans.size()-1] == '0') ans.pop_back();

    reverse(ans.begin(), ans.end());

    return ans == "" ? "0" : ans;
}