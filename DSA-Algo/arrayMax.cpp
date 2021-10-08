// #include <iostream>
// #include <climits>
// using namespace std;
// int main()
// {
//     cout << "Enter Size of array";
//     int n;
//     cin >> n;

//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int maxNo = INT_MIN;
//     int minNo = INT_MAX;

//     for (int i = 0; i < n; i++)
//     {
//         maxNo = max(maxNo, arr[i]); // max is in built function for Comparing the number
//         minNo = min(minNo, arr[i]); //max is in built function for Comparing the number
//     }

//     cout << maxNo << " " << minNo << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{

    int testCases, size;
    cin >> testCases;
    int arr[100];

    while (testCases--)
    {
        cin >> size;
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        int MAX = arr[0], MIN = arr[0];
        for (int i = 0; i < size; i++)
        {
            if (arr[i] >= MAX)
            {
                MAX = arr[i];
            }

            else if (arr[i] <= MIN)
            {
                MIN = arr[i];
            }
        }

        cout << MAX
             << endl;
    }
    return 0;
}
