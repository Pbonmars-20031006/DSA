#include<iostream>
using namespace std; 

int main(){

vector<vector<int>> arr;

int m=3, n=2;

for(int i=0;i<m;i++)
{
    vector<int> v;
    for(int j=0;j<n;j++)
{
        v.push_back(j);
}
arr.push_back(v);

}

return 0;
}