#include<iostream>
using namespace std; 


int twopointer(int arr[], int x, int n)
{
    int first=0;
    int last=n-1;

    while(first<=last)
    {
        int sum=arr[first]+arr[last];

        if(sum==x)
            return 1;
        if(sum>x)
            last=last-1;
        else if( sum<x)
            first=first+1;
    }
    return -1;
}

int main(){
int arr[]={2,3,4,5,6,20,30,40};

cout<<twopointer(arr,90,8);
return 0;
}