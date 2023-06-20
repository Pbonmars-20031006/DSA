#include<iostream>
using namespace std; 

void sort12(int arr[], int n, int a, int b)
{
    int low=0; int mid=0; int high=n-1;
    while(mid<=high)
    {
        if(arr[mid]<a)
        {
             swap(arr[mid],arr[low]);
            low ++;
            mid++;
        }
        else if(arr[mid]>=a && arr[mid]<=b)
        {
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    for(int i=0;i<n;i++)
        cout<<arr[i];
}



int main(){
int arr[]={0,1,2,4,5,3,6,2,1};
sort12(arr,9,2,4);
return 0;
}