#include<iostream>
#include<string>
#include<map>

using namespace std; 


// int leftmost(string str)
// {
//     map<char,pair<int,int> > s;

//     for(int i=0;i<str.size();i++)
//             if(s[str[i]].first==0)
//             {
//                 s[str[i]].first=1;
//                 s[str[i]].second=i;
//             }
//             else
//                 s[str[i]].first++;
    
//     for(int i=0;i<s.size();i++ )
//         if(s[i].first>1)
//             return s[i].second;
//}

int leftmost(string str)
{
    char count[256]={0};

    for(int i=0; i<str.size();i++)
    {
         if(count[str[i]]>0)
            return i;
        else
        count[str[i]]++;

    }
    
    return -1;
}

int main(){
string str="abbcc";
cout<<leftmost(str);
return 0;
}