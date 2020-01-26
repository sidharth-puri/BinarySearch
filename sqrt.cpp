int Solution::sqrt(int A) {
    if(A==1){
        return 1;
    }
    int l=1,r=A;
    int ans;
    while(l<=r){
        int mid=(r+l)/2;
        if(mid==A/mid){
            return mid;
        }
        else if(mid<A/mid){
            l=mid+1;
            ans=mid;
        }
        else {
            r=mid-1;
        }
    }
    return ans;
}
