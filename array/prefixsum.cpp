#include<iostream>
using namespace std; 



int main(){

int arr[]={2,3,5,6,7,8,9};

int sum=0;

int prefixSum[7];
for(int i=0;i<7;i++)
{
    sum=sum+arr[i];
    prefixSum[i]=sum;
}

//if they ask sum 2,5 pos
// we can say arr[5]-arr[2]

return 0;
}