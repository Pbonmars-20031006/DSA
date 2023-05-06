#include <iostream>
using namespace std;
// int maxprofit(int arr[], int start , int end)
// {
//     if(end<=start)
//     {
//         return 0;
//     }
//     int profit=0;

//     for(int i=start;i<=end;i++)
//     {
//         for(int j=i+1; j<=end;j++)
//         {
//             if(arr[j]>arr[i])
//             {
//                 int curr_profit=arr[j]-arr[i]+ maxprofit(arr, start, i-1)+ maxprofit(arr, j+1,end);

//                 profit=max(profit, curr_profit);
//             }
//         }
//     }

//     return profit;
// }
//
// method 2
int maxprofit(int price[], int n)
{
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        if (price[i] > price[i - 1])
            profit = profit + price[i] - price[i - 1];
    }
    return profit;
}

int main()
{

    int arr[] = {1, 5, 3, 8, 12};

    cout << maxprofit(arr, 5);

    return 0;
}