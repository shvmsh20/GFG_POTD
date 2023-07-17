struct myCmp {
     bool operator()(
        pair<char, int> a,
        pair<char, int> b)
       
    {
        return a.second > b.second;
    }
};
		string FirstNonRepeating(string a){
		    // Code here
		    unordered_map<char, int> mp;
		    priority_queue<pair<char, int>, vector<pair<char, int>>, myCmp> pq;
		    int n = a.size();
		    string res;
		    for(int i=0; i<n; i++){
		        char x = a[i];
		        mp[x]++;
		        pq.push(make_pair(x, i));
		        bool found = false;
		        while(!pq.empty() && !mp.empty()){
		            pair<char, int> p = pq.top();
		            pq.pop();
		            if(mp[p.first]==1){
		                found = true;
		                res.push_back(p.first);
		                pq.push(p);
		                break;
		            }
		            
		        }
		        if(found==false){
		            res.push_back('#');
		        }
		    }
		    return res;
		}