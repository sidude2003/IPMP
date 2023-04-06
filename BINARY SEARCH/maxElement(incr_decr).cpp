int maxInBitonic(int arr[], int low, int high)
{
    // find out the size of the array
    // for edge case checking
    int n = high + 1;
 
    // main code goes as follows
    while (low <= high) {
        // find out the mid
        int mid = low + (high - low) / 2;
         
          // if mid index value is maximum
        if(arr[mid] > arr[mid+1] and arr[mid] > arr[mid-1])
              return arr[mid];
 
        // reducing search space by moving to right
        else if (arr[mid] < arr[mid + 1])
            low = mid + 1;
 
        // reducing search space by moving to left
        else
            high = mid - 1;
    }
 
    return arr[high];
}