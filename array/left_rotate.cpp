#include<iostream>
using namespace std; 

void lor(int arr[],int n)
{
    int temp=arr[0];
    for(int i=0;i<n;i++)
        arr[i]=arr[i+1];
    arr[n-1]=temp;

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

int main(){
    int arr[] = {1, 0, 2, 0, 3, 0, 4};
    lor(arr,7);
return 0;
} 