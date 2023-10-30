long long int sumXOR(int arr[], int n)
    {
    	//Complete the function
    	 long long int sum = 0;
        for(int j = 0;j<32;j++){
            int zero_count = 0;
            int one_count = 0;
            for(int i = 0;i<n;i++)
            {
             if(arr[i]%2 == 1) one_count++;
             else zero_count++;
             arr[i] = arr[i]/2;
            }
            sum += pow(2,j)*zero_count*one_count;
        }
        return sum;
    }