#include<iostream>
#include<string>
using namespace std; 


//O(n2)
// int longDistinct(string str)
// {
//     int n= str.size();
//     int res=0;
//     for(int i=0;i<n;i++)
//     {
//         vector<bool> visited(256);
//         for(int j=i;j<n;j++)
//         {
//                 if(visited[str[j]]==true)
//                     break;
//                 else
//                 {
//                     res=max(res,j-i+1);
//                     visited[str[i]]=true;
//                 }
//         }
       
//     }
//      return res;
// }

int longDistinct(string str)
{
    int res=0;
    int n= str.size();
    vector<int>prev(256,-1);
    int i=0;
    for(int j=0;j<n;j++)
    {
        i= max(i, prev[str[j]]+1);
        int maxend= j-i+1;
        res=max(res, maxend);
        prev[str[j]]=j;
    }
    return res;
}

int main(){

string str="acdbabcd";
cout<<longDistinct(str);
return 0;
}