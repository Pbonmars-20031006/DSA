#include <iostream>
using namespace std;

void lor(int arr[], int n, int m)
{
    int temp[m];
    for (int i = 0; i < m; i++)
    {
        temp[i] = arr[i];
    }

    for (int i = 0; i < n; i++)
        arr[i] = arr[i + m];
    // arr[n-1]=temp;
    for (int i = 0; i < m; i++)
        arr[n - i - 1] = temp[m - i - 1];

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    lor(arr, 7, 2);
    return 0;
}