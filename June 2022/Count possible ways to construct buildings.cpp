int mod = 1e9+7;
	int TotalWays(int n)
	{
	    // Code here
	    long long  ocb=1;
	    long long  ocs=1;
	    for(int i=2; i<=n; i++){
	        long long  ncb = (ocs)%mod;
	        long long  ncs = ((ocs)%mod+(ocb)%mod)%mod;
	        ocs = ncs;
	        ocb = ncb;
	    }
	    long long side1 = ((ocs)%mod+(ocb)%mod)%mod;
	    return ((side1%mod)*(side1%mod))%mod;
	}