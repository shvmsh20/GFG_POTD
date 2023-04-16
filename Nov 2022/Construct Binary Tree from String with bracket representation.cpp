Node *treeFromString(string str){
        // code here
        return f(str,0,str.length()-1);
    }
    Node* f(string s,int lft,int rt) {
        // System.out.println(s+" "+lft+" "+rt);
        if(lft>rt) return NULL;
        
        int i=lft;
        while(i<=rt) {
            char c = s[i];
            if(c>='0' && c<='9') {
                i++;
            } else {
                break;
            }
        }
        
        Node* ans = new Node(stoi(s.substr(lft,i-lft)));
        
        int j=i;
        stack<char> stk;
        while(j<=rt) {
            char c = s[j];
            if(c==')') {
                stk.pop();
            } else if(c=='(') {
                stk.push('(');
            }
            if(stk.size()==0) break;
            j++;
        }
        
        ans->left = f(s,i+1,j-1);
        if(j+2<rt) ans->right = f(s,j+2,rt-1);
        return ans;
    }