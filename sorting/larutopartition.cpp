#include<iostream>
using namespace std; 

void partition( int arr[], int l, int h)
{
    int parti=arr[h];
    int i=l-1;
    for( int j=l; j<=h-1; j++)
    {
        if(arr[j]<parti)
        {
            i++;
            swap(arr[i], arr[j]);
        }

       
    }
     swap(arr[i+1], arr[h]);

    for(int i=0; i<=h;i++)
        cout<<arr[i]<<" ";
}

int main(){

int arr[]={10, 80, 30,90,40,50,70};
partition(arr,0,6);

return 0;
}