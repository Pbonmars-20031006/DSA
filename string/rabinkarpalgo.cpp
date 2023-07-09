#include<iostream>
using namespace std; 

bool search(string pat, string txt, int q) 
{ 
    int d=256;
 int n=txt.length();
 int m=pat.length();
 int h=1,p=0,t=0;
 for(int i=0;i<m-1;i++)
 {
     h=(h*d)%q;
 }
 for(int i=0;i<m;i++)
 {
     p=(p*d+pat[i])%q;
     t=(t*d+txt[i])%q;
 }
 for(int i=0;i<=n-m;i++)
 {
     int j;
     if(t==p)
     {
         for(j=0;j<m;j++)
         {
             if(txt[i+j]!=pat[j])
             {
                 break;
             }
         }
         if(j==m)
         {
             return true;
         }
     }
     if(i<=n-m)
     {
         t=(d*(t - h*txt[i]) + txt[i+m])%q;
         //if t becomes -ve make it positive by adding q//
         if(t<0){
             t=t+q;
         }
     }
     
 }
 return false;
} 
int main(){

return 0;
}