vector<int> findSubarray(int a[], int n) {
	    // code here
	    vector<int> ans, ref;

     int len = 0, start = 0, sum = INT_MIN, ref_sum = 0;

     for(int i = 0; i < n; i++){

         if(a[i] < 0) continue;

         while(i < n && a[i] >= 0){

             ref_sum += a[i];

             ref.push_back(a[i]);

             i++;

         }

         if(ref_sum > sum) {

             sum = ref_sum;

             ans = ref;

         }

         ref_sum = 0;

         ref.clear();

     }

     if(ans.size()) return ans;

     return {-1};
	}