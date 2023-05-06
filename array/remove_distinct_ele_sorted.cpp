#include<iostream>

#include<vector>
using namespace std; 

vector<int> removedele(int arr[], int n)
{
    vector<int> newarr;
    for(int i=0;i<n;i++)
        if(arr[i]!=arr[i+1]&&i!=n)
           // newarr.push_back(arr[i]);
           cout<<arr[i]<<" ";

        
    return newarr;
}

int main(){

//int arr[]={10,20,20,30,40,40,50};
int arr[]={10,10,10};
//int arr[]={10};
cout<<" ";
vector <int> reduced=removedele(arr,7);
// for(int i=0;i<sizeof(reduced);i++)
// {
//     cout<<reduced[i]<<" ";
// }
//cout<<reduced;
return 0;
}