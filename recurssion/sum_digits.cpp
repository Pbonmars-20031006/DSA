#include<iostream>
using namespace std; 

int sum( int n)
{
    if(n>0)
    return (n%10)+ sum(n/10);
    else
    return 0;
}
int main(){

    cout<< sum(9987);
return 0;
}

// time complexity O(N) AND space is the same
