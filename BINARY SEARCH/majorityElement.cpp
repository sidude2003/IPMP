bool isMajority(vector<int> arr, int x){
    int n = arr.size();
    int last_index = n%2 ? ((n/2)+1):(n/2);
    for(int i=0; i<last_index; i++){
        if(arr[i]==x && arr[i+n/2]==x){
            return 1;
        }
    }
    return -1;
}