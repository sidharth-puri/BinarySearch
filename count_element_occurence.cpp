/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 * 
 * @Output Integer
 */
 int binarysearch(int arr[],int l,int r,int x){
     
    while(r>=l){
        int mid=l + (r-l)/2;
        if(arr[mid]==x){
            return mid;
        }
        if(arr[mid]>x){
            r=mid-1;
        }
        else {
            l=mid+1;
        }
    }
    return -1;
 }
int findCount(const int* A, int n1, int B) {
    int count;
    int a=binarysearch(A,0,n1-1,B);
    if(a==-1){
        return 0;
    }
    else {
        count=1;
    }
    int left =a-1;
    int i;
    while(left>=0 && A[left]==B){
        left--;
        count++;
    }
    int right=a+1;
    while(right<n1 && A[right]==B){
        right++;
        count++;
    }
    return count;
}

