void insert(struct TrieNode *root, string key)
        {
            // code here
            TrieNode* currNode = root;
            for(char x: key){
                if(!currNode->children[x-'a']){
                    currNode->children[x-'a'] = new TrieNode();
                }
                currNode = currNode->children[x-'a'];
            }
            currNode->isLeaf = true;
        }
        
        //Function to use TRIE data structure and search the given string.
        bool search(struct TrieNode *root, string key) 
        {
            // code here
            TrieNode* currNode = root;
            for(char x: key){
                if(!currNode->children[x-'a']){
                    return false;
                }
                currNode = currNode->children[x-'a'];
            }
            return currNode->isLeaf == true ? true: false;
        }