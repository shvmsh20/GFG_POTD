 void addIPs(vector<string> &ans, string s, int octets, string ip) {
       if (!octets) {
           if (s.empty()) ans.push_back(ip);
           return;
       }
       if(!ip.empty()) ip += ".";
       for (int i = 1; i <= (int)s.size()-octets+1; i++) {
           if (stoi(s.substr(0, i)) > 255 || (i > 1 && s.substr(0, i)[0] == '0')) return;
           addIPs( ans, s.substr(i),
                   octets-1, ip + s.substr(0, i) );
       }
   }
   vector<string> genIp(string &s) {
       vector<string> ans;
       addIPs(ans, s, 4, "");
       if(ans.empty()) ans.push_back("-1");
       return ans;
   }