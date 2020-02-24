int searchMatrix(int** A, int n11, int n12, int B) {
    int low=0,high=n11-1,row=-1,col=-1;
    while ( low <= high ) {
        int mid=(low+high)/2;
       
        if(A[mid][0]<=B && B<=A[mid][n12-1]) {

            row=mid;
            break;
        }
        else if(A[mid][0]>B)
            high=mid-1;
        else
            low=mid+1;
    }
    if(row==-1) 
        return 0;
    low=0,high=n12-1;
    while( low <= high ) {
        int mid=(low+high)/2;
        if(A[row][mid]==B) {
            col=mid;
            break;
        }
        else if(A[row][mid]>B)
            high=mid-1;
        else
            low=mid+1;
    }
    if(col==-1) 
        return 0;
    return 1;
}

