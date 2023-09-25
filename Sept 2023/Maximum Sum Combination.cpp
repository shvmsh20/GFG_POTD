vector<int> maxCombinations(int N, int K, vector<int> &A, vector<int> &B) {
        // code here
        vector<int>ans;
       // sort both the array 
       sort(A.begin() , A.end());
       sort(B.begin() , B.end());
       // create a max-priority to store the sum and index 
       priority_queue<pair<int,pair<int,int>>> pq;
       // store the sum and index of largest element of both vector
       pq.push({A.back()+B.back(),{N-1 , N-1}});
       // create a set to store the index (because to store the value with unique index) it will optimized our solution  
       set<pair<int,int>>st;
       // insert the index 
       st.insert({N-1,N-1});
       
       //Return the maximum K valid sum combinations from all the possible sum combinations
       while(K--){
           
           auto p = pq.top(); // to element of priority queue
           int sum = p.first; 
           int i = p.second.first;
           int j = p.second.second;
           
           // store the sum in the ans vector
           ans.push_back(sum);
           
           // pop the for  priority queue and check the possible Max - sum 
           pq.pop();
           // After the sorting the array the possible ans will be left and right diagonal 
           
           if(st.find({i-1 , j}) == st.end()){   // it means that index i and j is not present inthe set and we store possible sum
               pq.push({A[i-1] + B[j], {i-1 , j}});
               st.insert({i-1,j});
           }
           
            if(st.find({i , j-1}) == st.end()){   // it means that index i and j is not present inthe set and we store possible sum
               pq.push({A[i] + B[j-1] , {i , j-1}});
               st.insert({i,j-1});
           }
           
       }
       
       return ans;
       
    }