#include<iostream>
using namespace std; 


    int  binarysearch(int arr[], int x, int first, int last , int mid )
    {
        if(first<last)
        {
            if (arr[mid]==x)
                return mid;
            else if(arr[mid]<x)
                return binarysearch(arr,x,first, mid, (first+mid)/2);
            else if(arr[mid]>x)
                 return binarysearch(arr,x,(first+mid)/2, mid, first);
        }
        else
            return -1;
    }


int main(){
cout<<"hello";
int arr[]={10,20,30,40,50};

int x=binarysearch(arr,20,0,4,2);

return 0;
}