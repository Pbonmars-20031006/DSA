#include<iostream>
#include<queue>
using namespace std; 

void gen(int k, string  d1, string  d2)
{
    queue<string > q;
    q.push(d1);
    q.push(d2);
    while(q.size()!=k)
    {
        string top=q.front();
        q.pop();
        q.push(top+d1);
        q.push(top+d2);
    }

    while(!q.empty())
    {
        cout<<q.front()<< " ";
        q.pop();
    }
}

int main(){

gen(10, "5", "6");
return 0;
}