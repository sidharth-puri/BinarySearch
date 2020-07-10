#include <iostream>
using namespace std;

int main() {
    long long int n;
    cin>>n;
    long long int i,arr[n];
    for(i=0;i<n;i++) {
        cin>>arr[i];
    }
    long long int x;
    cin>>x;
    int l=0,r=n-1;
    while(l<=r) {
        int mid =l+(r-l)/2;
        if(arr[mid]==x){
            cout<<"Found";
            return 0;
        }
        else if(arr[mid]<x){
            l=mid+1;
        }
        else {
            r=mid-1;
        }
    }
    cout<<"Not Found";
    return 0;
}
