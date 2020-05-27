#include<stdio.h> 

int ceilSearch(int arr[], int l, int r, int x) 
{ 
  int ans=-1;
 while (l <= r) { 
        int m = l + (r - l) / 2; 
  
       
        if (arr[m] == x) 
            return m; 
  
   
        if (arr[m] < x) 
            l = m + 1; 
  
     
        else {
          ans=m;
         
            r = m - 1;
          
        }
    } 
  
    
    return ans; 
} 


int main() 
{ 
int arr[] = {1, 2, 8, 10, 10, 12, 19}; 
int n = sizeof(arr)/sizeof(arr[0]); 
int x = 0; 
int index = ceilSearch(arr, 0, n-1, x); 
if(index == -1) 
	printf("Ceiling of %d doesn't exist in array ", x); 
else
	printf("ceiling of %d is %d", x,arr[ index]); 
getchar(); 
return 0; 
} 
