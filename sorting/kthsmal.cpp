#include<iostream>

using namespace std; 

int  partition( int arr[], int l, int h)
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

int kthelem(int arr[], int n, int k)
{
    int l=0; int h=n-1;
    while(l<=h)
    {
        int p=partition(arr, l,h);
        if(p==k-1)
            return p;
        else if (p>k-1)

            h=p-1;
        else 
            l=p-1;


    }

    return -1;
}



int main(){

int arr[]={10, 80, 30,90,40,50,70};
partition(arr,0,6);

return 0;
}