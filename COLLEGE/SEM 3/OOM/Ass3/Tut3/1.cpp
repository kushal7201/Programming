#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        vector<char> brr;
        for (int i = 0; i < 8; i++)
            brr.push_back(s[i]);

        int arr[27];
        for (int i = 0; i < 27; i++)
            arr[i] = 0;
        for (int i = 0; i < 8; i++)
        {
            arr[(int)s[i] - 96]++;
        }
        int flag = 1;
        for (int i = 1; i < 27; i++)
        {
            if (arr[i] > 0)
            {
                if ((8 - arr[i]) >= arr[i])
                    continue;
                else
                {
                    flag = 0;
                    break;
                }
            }
        }
        int m = 0;
        if (flag == 0)
            cout << -1 << endl;
        else
        {
            while (brr.size() != 0)
            {
                for (int i = 0; i < brr.size(); i++)
                {
                    if (brr[i] != s[m])
                    {
                        cout << brr[i];
                        brr.erase(brr.begin() + i);
                        m++;
                    }
                }
            }
        }
        cout << endl;
    }
    return 0;
}
