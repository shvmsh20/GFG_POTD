class Node{
    public:
    int key,val;
    Node*next;
    Node*prev;
    
    Node(){
        
        key=val=-1;
        
        next=prev=NULL;
    }
    
    Node(int k,int value){
        key = k;
        val = value;
        next = prev = NULL;
    }
};

class LRUCache {
    
  private:
  unordered_map<int,Node*>mp;
  int capacity;
  Node*head;
  Node*tail;
  void insertAfterHead(Node*node){
      Node*nextNode = head->next;
      head->next = node;
      node->prev = head;
      node->next = nextNode;
      nextNode->prev = node;
     
  }
  void deleteNode(Node*node){
      Node*before = node->prev;
      Node*after = node->next;
      before->next = after;
      after->prev = before;
     
      
  }
  
  public:
    // Constructor for initializing the cache capacity with the given value.
    
    LRUCache(int cap) {
        // code here
        capacity = cap;
        mp.clear();
        head = new Node();
        tail = new Node();
        head->next = tail;
        tail->prev = head;
    }

    // Function to return value corresponding to the key.
    int get(int key) {
        // your code here
        if(mp.find(key)==mp.end()) return -1;
         Node*node = mp[key];
         int val = node->val;
         deleteNode(node);
         insertAfterHead(node);
         return val;
    }

    // Function for storing key-value pair.
    void put(int key, int value) {
        // your code here
        if(mp.find(key)!=mp.end()){
            Node*node = mp[key];
            node->val = value;
            deleteNode(node);
            insertAfterHead(node);
            return ;
        }
        
        if(mp.size()==capacity){
            Node*NodeTodelete = tail->prev;
            mp.erase(NodeTodelete->key);
            deleteNode(NodeTodelete);
            delete NodeTodelete;
        }
        
        Node*newNode = new Node(key,value);
        mp[key]= newNode;
        insertAfterHead(newNode);
    }
};