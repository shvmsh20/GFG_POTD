struct Node {
        int freq;
        Node *child[26];
        Node(){
            freq=0;
            for(int i=0; i<26; i++){
                child[i] = NULL;
            }
        }
    };
    
    void buildTrie(Node *root, string s){
        Node *curr = root;
        for(int i=0; i<s.size(); i++){
            int index = s[i]-'a';
            if(curr->child[index]==NULL){
                Node *newNode = new Node();
                curr->child[index] = newNode;
            }
            curr->child[index]->freq++;
            curr = curr->child[index];
        }
    }
    string LCP(string ar[], int n)
    {
        // code here
        Node *root = new Node();
        for(int i=0; i<n; i++){
            buildTrie(root, ar[i]);
        }
        string res="";
        string s = ar[0];
        Node *curr = root;
        for(int i=0; i<s.size(); i++){
            int index = s[i]-'a';
            if(curr->child[index]->freq!=n){
                break;
            }else{
                res = res + s[i];
                curr = curr->child[index];
            }
        }
        return res.empty()?"-1":res;
        
    }