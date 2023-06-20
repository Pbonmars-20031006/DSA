#include<iostream>
using namespace std; 

int partition( int arr[], int l, int h)
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

    return i;
}


void quicksort(int arr[], int l, int h)
{

    if(l<h){
    int part= partition(arr, l, h);
    quicksort(arr, l, part-1);
    quicksort(arr, part+1, h);
    }
}


int main(){

int arr[]={10, 80, 30,90,40,50,70};
quicksort(arr,0,6);

for(int i=0;i<7;i++)
    cout<<arr[i]<<" ";

return 0;
}