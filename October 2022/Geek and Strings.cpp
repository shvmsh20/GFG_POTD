struct Node{
        int count;
        Node* child[26];
        Node(){
            count=0;
            for(int i=0; i<26; i++){
                child[i] = nullptr;
            }
        }
    };
    void buildTrie(Node* curr, string &s){
        for(int i=0; i<s.length(); i++){
            int index = s[i]-'a';
            if(curr->child[index]==nullptr){
                curr->child[index] = new Node();
            }
            curr = curr->child[index];
            curr->count++;
        }
    }
    int countPrefix(Node* curr, string &s){
        for(int i=0; i<s.length(); i++){
            int index = s[i]-'a';
            if(curr->child[index]==nullptr){
                return 0;
            }
            curr = curr->child[index];
        }
        return curr->count;
    }
    vector<int> prefixCount(int N, int Q, string li[], string query[])
    {
        // code here
        Node* root = new Node();
        for(int i=0; i<N; i++){
            buildTrie(root, li[i]);
        }
        vector<int> res;
        for(int i=0; i<Q; i++){
            res.push_back(countPrefix(root, query[i]));
        }
        return res;
    }