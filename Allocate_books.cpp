int ispossible(vector<int> &A,int x,int k){
    int i,sum=0,student=1;
    for(i=0;i<A.size();i++){
        if(A[i]>x){
            return 0;
        }
        if(sum+A[i]>x){
            student++;
            sum=A[i];
        }
        else{
            sum+=A[i];
        }
    }
    if(student<=k){
        return 1;
    }
    else {
        return 0;
    }
}
int Solution::books(vector<int> &A, int k) {
    int i,sum=0;
    if(A.size()<k){
        return -1;
    }
    for(i=0;i<A.size();i++){
        sum=sum+A[i];
    }
    int l=0;
    int r=sum;
    int ans=-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(ispossible(A,mid,k)){
            ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return ans;
}
