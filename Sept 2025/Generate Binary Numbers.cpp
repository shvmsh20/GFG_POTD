   vector<string> generateBinary(int N) {
        // code here
        // Your code here
	queue<string> q;
	vector<string> v;
	q.push("1");
	for(int i=0;i<N;i++){
	    v.push_back(q.front());
	    q.push(q.front()+'0');
	    q.push(q.front()+'1');
	    q.pop();
	}
	return v;
    }