#include<iostream>
using namespace std; 

void leader(int arr[],int n)
{
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        //cout<<arr[i]<<"\n";
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                flag=false;
                break;
            }
            flag=true;
        }
        if(flag==true)
            cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {7, 10, 5, 6,4,2,1};
    leader(arr,7);
return 0;
} 