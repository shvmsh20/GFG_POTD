static bool cmp(pair<long double,long long>&a,pair<long double,long long>&b){
	    return a.first>b.first;
	}
	long double maximumProfit(int N, long long C, vector<long long> w, vector<long long> p){
	    // Code here.
	   
	   vector<pair<long double,long long>>mp;
	   for(int i=0;i<N;i++){
	       mp.push_back({(double)p[i]/(double)w[i],w[i]});
	   }
	   sort(mp.begin(),mp.end(),cmp);
	   long double profit=0;
	   for(int i=0;i<mp.size();i++){
	       long long m=sqrt(mp[i].second);
	       if(mp[i].second!=m*m){
	           if(C-mp[i].second>=0){
	               profit+=mp[i].first*mp[i].second;
	               C=C-mp[i].second;
	           }
	           else{
	               long double x=mp[i].first*C;
	               profit+=x;
	               break;
	           }
	       }
	   }
	   return profit;
	    
	}