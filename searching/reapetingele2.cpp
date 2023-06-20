#include<iostream>
using namespace std; 


int repeat( int arr[], int n)
{
    int slow=arr[0]+1, fast=arr[0]+1;

    do{
        slow=arr[slow]+1; //0 ko 1
        fast=arr[arr[fast]+1]+1;
    }while(slow!=fast);
    

    slow=arr[0]+1;
    while(slow!=fast)
    {
        slow=arr[slow]+1;
        fast=arr[fast]+1;
    }

    return slow-1;
}
int main(){

return 0;
}