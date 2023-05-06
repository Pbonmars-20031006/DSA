#include<iostream>
using namespace std; 

// int factorial(int n)
// {
//     if(n==0)
//         return 1;
//     else
//         return n*factorial(n-1);
// }

// int trailer(int n)
// {
//     int count =0;
//     while(n>0)
//     {
//         if(n%10!=0)
//             break;
//         else
//             {
//                 count++;
//                 n=n/10;
//             }
//     }
//     return count;
// }
// the baove method fails for grweater tha 15 coz of memory overflow and stuff

// easy eway 

int trailer2(int n)
{
    int res=0;
    for(int i=5 ; i<=n; i=i*5)
    {
            res =res+ n/i;
    }
    return res;
}


int main(){
int n;
cout<<"Hello";
cin>>n;
        cout << trailer2(n);
return 0;
}