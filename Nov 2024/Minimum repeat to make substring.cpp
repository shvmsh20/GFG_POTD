int minRepeats(string& A, string& B) {
        // code here
        string s = A;
        int moves = 1;
        // check if size of A is less than B
        while (A.size() < B.size()){
            A += s;
            moves++;
        }
        // find function is used to find whether B is available in A or not 
        if (A.find(B) != -1){
            return moves;
        }
        // Now we add one more time to be safe 
        A += s;
        moves++;
        if (A.find(B) != -1){
            return moves;
        }
        // if we don't find then return -1
        return -1;
        
    }