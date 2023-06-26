#include<iostream>
using namespace std; 


int findLongestConseqSubseq(int arr[], int n, int sum)
    {
        unordered_map<int,int> m;
        int presum=0; int res=0;
        
        for(int i=0;i<n;i++)
        {
            presum=presum+arr[i];
            if(presum==sum)
                res=i+1;
            if(m.find(presum)==m.end())
                m.insert(presum,i);
            if(m.find(presum-sum)!=m.end())
                res =max(res,i-m[presum-sum]);
                
        }
        return res;
    }

int main(){

return 0;
}