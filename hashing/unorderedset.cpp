#include<iostream>
#include<unordered_set>

using namespace std; 
int main(){


unordered_set<int>  s;

s.insert(10);
s.insert(5);
s.insert(20);

for(auto it= s.begin();it!=s.end();it++)
    cout<<(*it)<<" ";

s.size();
//s.clear();
auto pos= s.find(10);// returns the pos iterator for 10 if it exists
int found= s.count(10);

// cana't have duplicate val

s.erase(10); //removes the ele // can bebused over a range
//too

return 0;
}