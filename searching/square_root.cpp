#include<iostream>
using namespace std; 


    int binarysearch(int x)
    {
        int first=0;
        int last=x;
        int arr;
        while(first <=last)
        {
  int mid= (first+last)/2;

        if(mid*mid==x)
            return mid;
        else if(mid*mid>x)
                last=mid-1;
        else if(mid*mid<x)
            {
                first=mid+1;
                arr=mid;
            }

        }
        return  arr;
    }   


int main(){
cout<<"hello";

int x;
cin>>x;
cout<< binarysearch(x);
return 0;
}