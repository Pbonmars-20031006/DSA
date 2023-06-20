#include<iostream>
using namespace std; 


void threetwopointer(int arr[], int x, int n)
{

    for(int i=0;i<n;i++){
    int first=i+1;
    int last=n-1;

    while(first<=last)
    {
        int sum=arr[first]+arr[last];

        if(sum==x-arr[i])
        {
            cout<<arr[i]<<" "<<arr[first]<<" "<<arr[last];
            return;
        }
        if(sum>(x-arr[i]))
            last=last-1;
        else if( sum<(x-arr[i]))
            first=first+1;
    }
    }
    cout<<-1;
}

int main(){
int arr[]={2,3,4,5,6,20,30,40};

threetwopointer(arr,90,8);
return 0;
}