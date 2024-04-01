int merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp; // temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1;   // starting index of right half of arr

    //storing elements in the temporary array in a sorted manner//
    int count=0;
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            count+=mid-left+1;
            right++;
        }
    }

    // if elements on the left half are still left //

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
    return count;
}
   int mergeSort(vector<int> &arr, int low, int high) {
    int cnt=0;
    if (low >= high) return cnt;
    int mid = (low + high) / 2 ;
    cnt+=mergeSort(arr, low, mid);  // left half
    cnt+=mergeSort(arr, mid + 1, high); // right half
    cnt+=merge(arr, low, mid, high);
      // merging sorted halves
      return cnt;
}
    void inorder(Node*root,vector<int>&vect){
        if(root==NULL) return;
        inorder(root->left,vect);
        vect.push_back(root->data);
        inorder(root->right,vect);
    }
    int pairsViolatingBST(int n, Node *root) {
        vector<int> vect;
        inorder(root,vect);
        int count=mergeSort(vect,0,vect.size()-1);
        return count;
    }