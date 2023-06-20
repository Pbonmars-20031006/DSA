#include<iostream>
using namespace std; 



int maxguest(int arv[], int dep[], int n)
{
    sort(arv, arv+n);
    sort(dep, dep+n);

    int i=1, j=0 , res=1, curr=1;

    while(i<n && j<n)
    {
        if(arv[i]<=dep[j])
        {curr++; i++;}
        else
        {curr--; j++;}

        res= max(res, curr);

    }

    return res;

}

int main(){
int arv[]={900, 1000, 1100};
int dep[]={1030,1015,1130};

cout<<maxguest(arv,dep,3);
return 0;
}