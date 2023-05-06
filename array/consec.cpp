#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std; 

int cosec( int arr[], int n)
{
    int maxcount=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
            {
                if(maxcount<count)
                    maxcount=count;
                count=0;
            }
        else
        {
            count=count+1;
        }
    }

    return maxcount;
}


int main(){

int arr[]={1,0,1,1,1,1,0,1,1};

cout<< cosec(arr,9);

return 0;
}