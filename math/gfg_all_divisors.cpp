#include<iostream>
#include<math.h>
using namespace std; 

// divisors appear in pairs, so the most efficient solution for that

void divisors(int n)
{
    for(int i=0;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            cout<<(i)<<" "<< n/i<<" ";
        }

    }
}
//
int main(){

    int n;
    cin>>n;
    divisors(n);

return 0;
}