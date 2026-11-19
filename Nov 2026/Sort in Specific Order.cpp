 void sortIt(vector<int>& arr) {
        // code here
        int n = arr.size();

            int oddCount = count_if(arr.begin(), arr.end(),[](int x){
                return (x%2 != 0);
            });

            int mid = oddCount;

            while(mid < n && arr[mid]%2 == 0)
                mid++;

            int odd_ptr = 0;

            while(odd_ptr < oddCount && mid < n)
                {
                    if(arr[mid]%2 != 0)
                        swap(arr[mid],arr[odd_ptr]),odd_ptr++;
                    else
                        mid++;
                }   


            sort(arr.begin(),arr.begin() + oddCount, greater<int>());
            sort(arr.begin() + oddCount, arr.end());
        


    }