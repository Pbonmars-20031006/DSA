#include<iostream>
#include<vector>

using namespace std; 
vector<vector<int> > generate(int n) {
        vector<vector<int> > total;
        for(int i=1;i<=n;i++)
        {

            if(i==1)
            {
                 vector<int> j;
                j.push_back(1);
                total.push_back(j);
            }
            else if(i==2){
                 vector<int> j;
                j.push_back(1);
                j.push_back(1);
                total.push_back(j);
            }
            else
            {
              
                vector<int> r;
                r= total[i-1];
                //cout<<" hereeeee";
                vector<int> j;
                j.push_back(1);
                for(int k=0;k< total[i-1].size()-1;k++)
                {
                    j.push_back(r[k]+r[k+1]);
                }
                j.push_back(1);

                total.push_back(j);
            }
            


        }
        return total;
    }

int main(){
vector<vector<int> > j;

j=generate(3);
for(int i=0;i<3;i++)
{
    for(int k=0;k<=i;k++)
    {
    cout<<j[i][k]<<" ";
    }
    cout<<endl;
}
return 0;
}