#include<iostream>
#include<unordered_map>
using namespace std; 


int countnavie(int arr[], int n){
    unordered_map<int, int> h;
    for(int i=0;i<n;i++)
        h[arr[i]]++;
    for(auto x: h)
        cout<< x.first<<" "<< x.second<<endl;
}
int main(){

return 0;
}