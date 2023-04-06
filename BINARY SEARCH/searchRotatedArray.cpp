int search(int A[], int l, int h, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        if(l>h){
            return -1;
        }
        
        int m=(l+h)/2;
        
        if(A[m]==key){
            return m;
        }
        //if l to m is sorted
        if(A[l]<=A[m]){
            if(key>=A[l] && key<=A[m]){
                return search(A, l, m-1, key);
            }
            return search(A, m+1, h, key);
        }
        //if l to m is unsorted
        if(key>=A[m] && key<=A[h]){
            return search(A, m+1, h, key);
        }
        return search(A, l, m-1, key);
       
        
        
    }