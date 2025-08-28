#include <iostream>
using namespace std;

int main()
{
    int nums;
    cin >> nums;
    int arr[nums];

    for (int i = 0; i < nums; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < nums; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int target;
    cin >> target;
    int i, j;
    for (i = 0; i < nums; i++)
    {

        for (j = i + 1; j <= nums; j++)
        {
            if ((arr[i] + arr[j]) == target)
            {
                cout << i << " " << j << endl;
                break;
            }
        }

        // cout << i << " " << j << endl;
        // break;
    }

    return 0;
}