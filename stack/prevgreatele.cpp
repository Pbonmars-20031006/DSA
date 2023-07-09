#include<iostream>
#include<vector>
#include<stack>
using namespace std; 

vector <int> prevgreat(int arr[], int n)
{
    vector<int> prev1;
    stack<int> s;

    s.push(arr[0]);
    prev1.push_back(-1);
    for(int i=1;i<n;i++)
    {
        while(s.empty()==false && arr[i]>=s.top())
        {
            s.pop();
        }
        if(s.empty()==true)
            prev1.push_back(-1);
        else
            prev1.push_back(s.top());

        
        s.push(arr[i]);
    }
    return prev1;
}

int main(){
int arr[]={15, 10 ,18, 12 , 4, 6 , 2 ,8};
vector<int> temp=prevgreat(arr,8);
for(int i=0;i<8;i++)
    cout<<temp[i]<<" ";
return 0;
}