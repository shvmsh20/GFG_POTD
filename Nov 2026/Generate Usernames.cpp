vector<string> generateUsernames(vector<string> arr) {
        // code here
        unordered_map<string,int>m;
                int n = arr.size();
                vector<string>ans;
                for(int i=0;i<n;i++) m[arr[i]]=0;

                for(int i=0;i<n;i++){

                    string s = arr[i];

                    if(m[s]==0){
                        ans.push_back(s);
                        m[s]++;
                    }
                    else{

                        while(m.count(s+to_string(m[s])))m[s]++;
                        ans.push_back(s+to_string(m[s]));
                        m[s]++;

                    }

                }

                return ans;
    }