int ceilSearch(int arr[], int l, int r, int x){
  int m;
  if(x<=arr[l]){
    return l;
  }

  if(x>arr[r]){
    return -1;
  }

  m=(r+l)/2;

  if(x==arr[m]){
    return x;
  }

  else if(x>arr[m]){
    if(r>=m+1 && x<arr[m+1]){
      return m+1;
    }
    else{
      return ceilSearch(arr, m+1, int r, int x);
    }
  }
  else{
    if(l<=m-1 && arr[m-1]<x){
      return m;
    }
    else{
      return ceilSearch(arr, l, m-1, x)
    }
  }
}