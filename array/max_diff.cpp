#include<iostream>
using namespace std; 

int maxdiff(int arr[],int n)
{
    int diff=0;
    for(int i=0;i<n;i++)
    {
        int diffs=0;
        //cout<<arr[i]<<"\n";
        for(int j=i+1;j<n;j++)
        {
        
            if(diffs<arr[j]-arr[i])
            {
                diffs=arr[j]-arr[i];
            }
        }
        if(diffs>diff)
            diff=diffs;
    }
    return diff;
}

int main(){
    //int arr[] = {7, 10, 5, 6,4,2,1};
    int arr[]={30,10,8,2};
    cout<<maxdiff(arr,4);
return 0;
} 