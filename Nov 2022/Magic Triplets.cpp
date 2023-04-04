int countTriplets(vector<int>nums){
	    // Code here.
	    int final_count=0;
	    
	    for(int i=1;i<nums.size()-1;i++)
	    {
	        int j = i-1,flag=0,count_small=0,k=i+1,count_big=0;
	        
	        int val = nums[i];
	        
		//count of smaller numbers to left
	        while(j>=0)
	        {
	            if(nums[j]<val)
	            {
                         count_small++;
	            }
	            j--;
	        }
	        
		//count of bigger numbers to right
	        while(k<nums.size())
	        {
	            if(nums[k]>val)
	            {
	                count_big++;
	            }
	            k++;
	        }
					
		//add there multiplication to add into count
	        final_count+=(count_small*count_big);
	    }
	    
	    return final_count;
	}