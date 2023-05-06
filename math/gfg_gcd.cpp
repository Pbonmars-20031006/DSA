#include<iostream>
using namespace std; 

//worst case time complexity is  proportional to min(a,b)
//best case is 1

int gcd(int n,int m)
{
   int res= min(m,n);
   while(res>0){
   if(m%res==0 && n%res ==0)
   {
    break;
   }
   res--;
   }
   return res;
}
// let b be smaller than a then gcd(a,b)= gcd(a-b,b)
int eucladiangcd(int n, int m)
{
    while(n!=m)
    {
        if(n>m)
            n=n-m;
        else
            m=m-n;
    }
    return n; //m 
}
int modulogcd( int n, int m)
{
    if(m==0)
    {
        return n;
    }
    else
        return modulogcd(m, n%m);
}
int main(){

int  n,m;

cin>>n>>m;
//cout<< gcd(n,m);
cout<< modulogcd(n,m);
return 0;
}