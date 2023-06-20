#include<iostream>
using namespace std; 


void hoarepartition(int arr[], int l,int h)
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

    for(int i=l; i<=h;i++)
        cout<<arr[i]<<" ";
}


int main(){
int arr[]={10, 80, 5,90,6,50,70};
hoarepartition(arr,0,6);

return 0;
}