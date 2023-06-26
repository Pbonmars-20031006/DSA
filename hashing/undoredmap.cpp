#include<iostream>
#include<unordered_map>
using namespace std; 

int main(){

    unordered_map<string, int> m;
    m["gfg"]=30;
    m["ide"]=20;

    //m.insert({"courses",15});
    auto it=m.find("ide"); //gives an iterator pointing to it
    if(m.find("ide")!=m.end())
            cout<<"Found";

    for(auto x: m)
        cout<< x.first<<" "<< x.second<<endl;

    for(auto it= m.begin(); it!=m.end();it++)
        cout<<it->first<<" "<< it->second<<endl;

return 0;
}