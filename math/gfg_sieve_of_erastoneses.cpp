#include<iostream>
#include<vector>
#include<math.h>

using namespace std; 

// bool isPrime(int n)
// {
//     for(int i=0; i<=sqrt(n);i++)
//     {
//         if(n%i==0)
//             return false;
//         else
//             return true;
//     }
// }
void sieve(int n)
{
    vector<bool> isPrime(n+1,true);
    for(int i=2; i*i<=n;i++)
    {
        if(isPrime[i]) // marks that the checked is false and goes from there 
        {
         for(int j=2*i;j<=n; j=j+i) // for(int j=i*i; j<n; j=j+i)
         {
            isPrime[j]=false;
         }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(isPrime[i])
            cout<<i<<" ";
    }


}
int main(){

int n=18;
sieve(n);
return 0;
}