#include <iostream>
#include<climits>

using namespace std;

int main()
{
    int a[10], i, min = INT_MAX, pos, value;
    for (i = 0; i < 10; i++)
    {
        cout << "Enter the element " << i + 1 << ": ";
        cin >> a[i];
    }
    for (i = 0; i < 10; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            pos=i;
        }
    }
    cout << min << "is the minimum number"<<endl;
    // value = min;
    // for (i = 0; i < 10; i++)
    // {
    //     if (value == a[i])
    //     {
    //         pos = i;
    //         break;
    //     }
    // }

    int max = INT_MIN;
    for (i = pos; i < 10; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    cout << max << "is the maximum";

    return 0;
}