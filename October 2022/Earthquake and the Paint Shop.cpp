struct alphanumeric {
    string name;
    int count;
};
class Solution {
  public:
    vector<alphanumeric> sortedStrings(int N, vector<string> A) {
        // code here
        map<string, int> mp;
        for(int i=0; i<N; i++){
            mp[A[i]]++;
        }
        vector<alphanumeric> v;
        for(auto p: mp){
            alphanumeric x;
            x.name = p.first;
            x.count = p.second;
            v.push_back(x);
        }
        return v;
    }
};