#include<iostream>
using namespace std; 

int partition(int arr[], int l,int h)
{
    int i=l-1;
    int j=h+1;
    int pivot=arr[l];
    while(true)
    {
        do{
            i++;
        }while(arr[i]< pivot);

        do{
            j--;
        }while(arr[j]>pivot);

        if(i>=j)
            break;

        swap(arr[i], arr[j]);
    }

    return j;
}


void quicksort(int arr[], int l, int h)
{

    if(l<h){
    int part= partition(arr, l, h);
    quicksort(arr, l, part);
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