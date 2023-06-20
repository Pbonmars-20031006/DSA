#include<iostream>
using namespace std; 


int inverse(int a[], int b[] , int x, int y)
{
    int i=0;
    int j=0;
    int c[x+y];
    int k=0;
    int count=0;
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
            count=count + x-i;
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

    return count;
   
}


int main(){

int a[] ={10,20,30};
int b[]= {5, 50, 60};

inverse(a,b,3,3);

return 0;
}