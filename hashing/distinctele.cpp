#include<iostream>
#include<unordered_set>
using namespace std; 

int count12(int arr[], int n)
{
 unordered_set<int> s(arr, arr+n);

 return s.size();
}

int countdist(int arr[], int n){
    int res=0;
    for(int i=0;i<n;i++)
{
    bool flag= false;
    for(int j=0;j<n;j++){
        if(arr[i]==arr[j]){
            flag= true;
            break;
        }

        if(flag==false)
            res++;
    }
    return res;
}
}

int main(){

    int arr[]={1,2,3,4};
   cout<<count12(arr, 4);
   
return 0;
}