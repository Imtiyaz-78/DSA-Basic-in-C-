#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int length = 0;
    int arr[n]; 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int len = sizeof(arr) / sizeof(arr[0]);
    cout << "The length of the array is: " << len;

    return 0;
}
