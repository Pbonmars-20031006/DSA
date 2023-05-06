 #include<iostream>
 using namespace std; 
 
//time complextiy of this code is O(nlog(n))
//  int primefactor(int n)
//  {
//     for(int i=0;i<n;i++)
//     {
//         if(isPrime(i))
//         {
//             int x=i;
//             while(n%x==0)
//             {
//                 print(i);
//                 x=x*i;
//             }
//         }
//     }
//     return 0;
//  }

void primfactors(int n)
{
    if(n<=1)
        return;
    
        for(int i=2; i*i<=n;i++)
        {
            while(n%i==0)
            {
                cout<<(i);
                n=n/i;
            }
        }
    if(n>=1)
        cout<<n;
}
 int main(){
 
 return 0;
 }