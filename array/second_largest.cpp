#include<iostream>
using namespace std; 

int secondLargest(int arr[], int n)
{
    int l=arr[0];
    int sl=arr[0];
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]>l)
        {
            sl=l;
            l=arr[i];
            
        }
        if(arr[i]>sl && arr[i]<l)
            sl=arr[i];
    }
    return sl;
}


int main(){

int arr[]={10,10,10,10};
cout<<secondLargest(arr,4);
return 0;
}