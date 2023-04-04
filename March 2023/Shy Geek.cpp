Shop shop;
    Solution(Shop s)
    {
        this->shop = s;
    }
    
    int binarySearch(long coins, int& e){
        int maxprice = -1;
        int s = 0;
        int mid = s + (e-s)/2;
        
        while(s <= e){
            int price = shop.get(mid);
            if(price <= coins){
                if(maxprice < price){
                    maxprice = price;
                }
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        
        return maxprice;
    }
    
    
    long long find(int n, long k){
        int first = shop.get(0);
        long long count = 0;
        int end = n-1;
        while(k >= first){
            int price = binarySearch(k, end);
            count+=((int)(k/price));
            k%=price;
        }
        return count;
    }