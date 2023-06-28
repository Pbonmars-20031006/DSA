#include<iostream>
#include<string>
using namespace std; 

bool substr(string str, string og)
{
    int i=0;
    int j=0;

    while(i<og.size())
    {
        if(og[i]==str[j])
        {
            i++;
            j++;
        }
        else
            i++;
    }
    if(j!=str.size())
        return false;
    else    
        return true;

}


bool recursive(string str, string og, int i, int j){
    if(j==0)
        return true;
    if(i==0)
        return false;
    if(str[j-1]==og[i-1])
        return recursive(str, og, i-1, j-1);
    else 
        return recursive(str, og, i-1,j);
}

int main(){

return 0;
}