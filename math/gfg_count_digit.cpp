#include<iostream>
#include<string>
using namespace std; 

int count(int n)
{
        string n1=to_string(n);
        return n1.length();
}

int main(){
    int n;
    cin>>n;
    cout<<count(n);

return 0;
}