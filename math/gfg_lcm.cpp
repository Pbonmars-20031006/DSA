#include<iostream>
using namespace std; 

//time complexity is O(a*b)

int lcm(int n, int m )
{
    int res= max(n,m);

    while(true)
    {
        if(res %n==0 && res%m==0)
            break;
        else
            res++;
    }
    return res;

}

// or we could use the fact that n*m= gcd(n,m)* lcm(n,m)
int gcd(int n,int m)
{
    if (m==0)
        return n;
    else{
        return gcd(m, n%m);
    }
}
int shorterlcm(int n ,int m)
{
    return (n*m)/gcd(n,m);
}

int main(){

    int n,m;
    cin>>n>>m;
   // cout<<lcm(n,m);
   cout<<shorterlcm(n,m);

return 0;
}