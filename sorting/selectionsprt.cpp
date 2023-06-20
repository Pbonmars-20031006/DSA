#include<iostream>
using namespace std; 


void selectionSort(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        int max=arr[0];
        int maxpos=0;
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>max)
            {
                max=arr[j];
                maxpos=j;
            }
        }
        int temp=arr[n-i-1];
        arr[n-i-1]=max;
        arr[maxpos]=temp;

    }

    for(int i=0;i<n;i++)
        cout<<arr[i]<<' ';
}
int main(){

int arr[5]={3,1,2,4,6};

selectionSort(arr,5);

return 0;
}