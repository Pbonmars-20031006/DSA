#include<iostream>
#include<string>
using namespace std; 

bool pallin(string str)
{
    int i=0;
    int j=str.size()-1;

    while(i<=j){
        if(str[i]!=str[j])
            return false;
        else{
            i++;
            j--;
        }
    }
    return true;
}

int main(){

string str="mom";
cout<<pallin(str);
return 0;
}