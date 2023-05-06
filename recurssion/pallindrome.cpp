#include<iostream>
#include<string>
using namespace std; 

bool pallin(string a, int start, int end)
{
   if(start>=end)
    return true;

    if(a[start]==a[end])
        return (pallin(a, start+1, end-1));

    return false;
    // return( a[start]==a[end])&& pallin(a, start +1, end -1) // shortcircuiting
}

int main(){

cout<<pallin("abba", 0,3);
return 0;
}