#include<iostream>
using namespace std; 


int findpeak(int arr[], int n)
{
    int first=0;
    int end=n-1;
   

    while(first<=end)
    {
       int mid=(first+end)/2;
       if((mid==0 || arr[mid-1]<=arr[mid]) && (mid==n-1 || arr[mid+1]<=arr[mid]))
            return mid;
        
        if(mid>0 && arr[mid-1]>=arr[mid])
         end=mid-1;
        else
             first=mid+1;

    }
    return -1;
}
int main(){

int arr[]={5,12,30,13,56,7,8,9};
cout<<arr[findpeak(arr,8)];

return 0;
}