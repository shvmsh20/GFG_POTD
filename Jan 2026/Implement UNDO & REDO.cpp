class Solution {
  public:
     string ans = "";
    vector<char> v;
    void append(char x) {
        // append x into document
        ans.push_back(x);
    }

    void undo() {
        // undo last change
        v.push_back(ans.back());
        ans.pop_back();
    }

    void redo() {
        // redo changes
        ans.push_back(v.back());
        v.pop_back();
    }

    string read() {
        // read the document
        return ans;
    }
};