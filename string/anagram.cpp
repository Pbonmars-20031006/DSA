#include<iostream>
using namespace std; 

bool ana(string og, string str)
{
    char count[256]={0};

    for(int i=0;i<str.size();i++)
    {
        count[og[i]]++;
        count[str[i]]--;
    }

    for(int i=0;i<256;i++)
        if(count[i]!=0)
            return false;

    return true;
}

int main(){

return 0;
}