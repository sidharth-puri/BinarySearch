 int check(long long int k, long long int t,int *a,long long int n,long long int x)
 {
     long long int i=0,sum=x,p=1;
     while(i<n)
     {
         if(sum-(a[i])<0)
         {
             p++;
             sum=x;
         }
         else
         {
             sum=sum-(a[i]);
             i++;
         }
         if(p>k)
     {
         return 0;
     }
     }
     
     
     
         return 1;
     
 }
int paint(int k, int t, int* a, int n) {
    long long int i,max=INT_MIN,l,r,sum=0,ans,mid;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
        if(a[i]>max)
        {
            max=a[i];
        }
        
    }
    l=max;
    r=sum;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(check(k,t,a,n,mid))
        {
            ans=mid;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return ((ans%10000003)*t)%10000003;
}
