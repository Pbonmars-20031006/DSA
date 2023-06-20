#include<iostream>
using namespace std; 


int union1(int a[], int b[], int x, int y){

    int i=0;
    int j=0;
    int c[x+y];
    int k=0;
    while(i<x && j<y)
    {
       if(a[i]<=b[j])
       {
            c[k]=a[i];
            k++;
            i++;
       }
       else if(a[i]>=b[j])
       {
            c[k]=b[j];
            k++;
            j++;
       }
            
    }

       // cout<<i << " "<< j<<endl;


    if( i==x)
    {
        for(int d=j;d<y;d++)
        {
            c[k]=b[d];
            k++;
        }
    }
    else  if( j==y)
    {
        for(int d=i;d<x;d++)
        {
            c[k]=a[d];
            k++;
        }
    }

    for(int d=0;d<x+y;d++)
    {
        
       if(i==0 || c[d]!=c[d-1])
         cout<<c[d]<<" ";
    }
}


int main(){

int a[] ={2,3,3,4,4,4,4};
int b[]= {4,4};

union1(a,b,7,2);

return 0;
}