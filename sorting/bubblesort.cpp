#include<iostream>
using namespace std; 

void bubbleSort(int arr[], int n)
    {
        // Your code here  
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp=arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }

//since this always sorts with time complextiy of n^2
// there is a way if lets an array is already sorted to prevent wasatge of time 
// we can do this
void bubbleSort2(int arr[], int n)
    {
        // Your code here  
        for(int i=0;i<n;i++)
        {
            bool swapped=false;
            for(int j=0;j<n-i-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp=arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=temp;
                    swapped=true;
                }
            }
            if(swapped=false)
                break;
        }
    }

int main(){

return 0;
}