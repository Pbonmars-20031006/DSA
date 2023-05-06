#include<iostream>
using namespace std; 
    int multiplicationUnderModulo(long long a,long long b)
    {
        long long int x=a*b;
        cout<<x;
       return (a*b)%1000000007;
    }
int main(){
cout<< multiplicationUnderModulo( 92233720368547758, 92233720368547758);
//cout << "Hello"<<' '<< exactly3Divisors(20);
return 0;
}