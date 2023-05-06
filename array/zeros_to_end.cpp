#include <iostream>
#include <vector>
using namespace std;

// void pusher(int arr[], int n){
//     int i=0;

//     while(i<n)
//     {
//         //cout<< arr[i]<<" "<<endl;
//         if(arr[i]==0)
//         {
//            for(int j=i+1;j<n;j++)
//            {
//             if(arr[j]!=0)
//                 iter_swap(arr+i, arr+j);
//            }
//             //cout<<arr[i]<<" "<<i;

//         }
//          i++;
//     }
//     for(int i=0;i<n;i++)
//         cout<<arr[i]<<" ";
//}

// efficient soln

void pusher(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=0){
        swap(arr[i], arr[count]);
        count++;
        }
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main()
{
    int arr[] = {1, 0, 2, 0, 3, 0, 4};
    pusher(arr, 7);
    return 0;
}