class Node{
    public:
    Node* children[26];
    bool flag; // end of word flag
    
    Node(){
        flag = false;
        for(int i=0;i<26; i++){
            children[i] = nullptr;
        }
    }
};

// User function template for C++
class Trie {
  private: 
    Node* root;
    
  public:

    Trie() {
        // implement Trie
        root = new Node();
    }

    void insert(string &word) {
        // insert word into Trie
        Node* node = root;
        for(char c: word){
            int index = c - 'a';
            if(node->children[index] == nullptr){
                node->children[index] = new Node();
            }
            node = node->children[index];
        }
        node->flag = true;
    }
    bool search(string &word) {
        // search word in the Trie
        Node* curr = root;
        for(char ch:word){
            int index = ch-'a';
            if(curr->children[index] == nullptr){
                return false;
            }        
            curr = curr->children[index];
        }
        
        return curr->flag;
        
    }

    bool isPrefix(string &word) {
        // search prefix word in the Trie
        Node* curr = root;
        for(char ch:word){
            int index = ch-'a';
            if(curr->children[index] == nullptr){
                return false;
            }        
            curr = curr->children[index];
        }
        
        return true;
    }
};