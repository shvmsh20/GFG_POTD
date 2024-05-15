class Disjoint {
private:
  vector<long long> rank, parent;

public:
  Disjoint(int n) {
    rank.resize(n);
    parent.resize(n);
    for (int i = 0; i < n; i++)
      parent[i] = i;
  }

  int findParent(int node) {
    if (node == parent[node])
      return node;
    return parent[node] = findParent(parent[node]);
  }

  void unionByRank(int u, int v) {
    int pu = findParent(u);
    int pv = findParent(v);

    if (rank[pu] < rank[pv]) 
      parent[pu] = pv;
    else if(rank[pu] > rank[pv])
      parent[pv] = pu;
    else {
      parent[pv] = pu;
      rank[pu]++;
    }
  }
};


class Solution{
  public:
    vector<vector<string>> accountsMerge(vector<vector<string>> &accounts) {
  int n = accounts.size();
  Disjoint d(n);

  /* DISTRIBUTNG ON TO INDEX */
  unordered_map<string, int> mp;
  for (int i = 0; i < n; i++) {
    for (int j = 1; j < accounts[i].size(); j++) {
      string mail = accounts[i][j];
      if (mp.find(mail) == mp.end())
        mp[mail] = i;
      else
        d.unionByRank(i, mp[mail]);
    }
  }

  /* MERGING */
  vector<string> mergedMail[n];
  for (auto i : mp) {
    string mail = i.first;
    int node = d.findParent(i.second);
    mergedMail[node].push_back(mail);
  }

  vector<vector<string>> ans;
  for (int i = 0; i < n; i++) {
    if (mergedMail[i].size() == 0)
      continue;

    sort(mergedMail[i].begin(), mergedMail[i].end());
    mergedMail[i].insert(mergedMail[i].begin(), accounts[i][0]);
    ans.push_back(mergedMail[i]);
  }

  return ans;
}
};