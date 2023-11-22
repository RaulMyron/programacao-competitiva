#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num, threshold, min_length;
    int count = 0, temp = 0;

    cin >> num >> threshold >> min_length;

    for (int i = 0; i < num; i++)
    {
        int x;
        cin >> x;
        if (x <= threshold)
        {
            temp++;
            if (temp >= min_length)
                count++;
        }
        else
        {
            temp = 0;
        }
    }

    cout << count << endl;

    return 0;
}
