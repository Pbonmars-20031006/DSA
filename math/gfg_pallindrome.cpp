#include<iostream>
#include<string>
#include<math.h>
using namespace std; 

bool pallindrome(int n)
{
    int x=n;
    int rev=0;
    while(x>0)
    {
        double n3= x%10; 
        rev= rev*10+ n3;
        x=x/10;
    }
    if(rev==n)
        return true;
    else
        return false;

}

int main(){
    int  n;
    cout<<"hello";
    cin>>n;
    cout<< pallindrome(n);
return 0;
}