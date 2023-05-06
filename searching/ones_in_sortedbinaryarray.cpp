#include<iostream>
using namespace std; 

void count(int arr[], int n)
{
    int first=0;
    int last=n-1;
    
    while(first<last)
    {
        int mid=(first+last)/2;

        if(arr[mid]==0)
            first=mid+1;
        else if(arr[mid]==1)
        {
           if(arr[mid]==0 || arr[mid-1]!=arr[mid])
            cout<<n-mid;
          else
            last=mid-1;

        }

    }
}

int main(){

return 0;
}