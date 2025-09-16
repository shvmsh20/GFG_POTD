bool isOperator(string x){
      return x=="+" || x=="-" || x=="*" || x=="/" || x=="^";
  }
    int solveDiv(int x, int y){
        if(x*y<0 && x%y!=0){
            return (x/y)-1;
        }
        return x/y;
    }
    int evaluatePostfix(vector<string>& arr) {
        // code here
        stack<int>st;
        for(string x: arr){
            if(isOperator(x)){
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
                int res;
                if(x=="+"){
                    res = a+b;
                }else if(x=="-"){
                    res = a-b;
                }else if(x=="*"){
                    res = a*b;
                }else if(x=="/"){
                    res = solveDiv(a, b);
                }else{
                    res = pow(a, b);
                }
                st.push(res);
            }else{
                st.push(stoi(x));
            }
        }
        return st.top();
    }