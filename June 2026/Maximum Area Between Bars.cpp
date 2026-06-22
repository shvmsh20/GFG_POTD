int maxArea(vector<int> &height) {
        // code here
        int n = height.size();
        int left = 0, right = n-1, res = 0;
        while(left<right){
            int area = min(height[left], height[right])*(right-left-1);
            res = max(res, area);
            if(height[left]<=height[right]){
                left++;
            }else{
                right--;
            }
        }
        return res;
    }