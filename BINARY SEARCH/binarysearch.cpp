int binarySearch(int arr[], int l, int r, int key){
    int m;
        m=l+(r-1)/2;
        while(l<=r){
            if(arr[m]==key){
                return m;
            }
            if(arr[m]<key){
                l=m+1;
            }
            else if(arr[m]>key){
                r=m-1;
            }
        }
        return -1;
}