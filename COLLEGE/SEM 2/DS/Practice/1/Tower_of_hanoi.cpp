#include <bits/stdc++.h>
using namespace std;

void tower_of_hanoi(int n, char from, char to, char temp)
{
    static int count = 0;
    count++;
    if (n == 1)
    {
        cout << "Move the disk 1 from " << from << " to " << to << endl;
        cout<<count;
    }
    else
    {
        tower_of_hanoi(n - 1, from, temp, to);
        cout << "Move the disk " << n << " from " << from << " to " << to << endl;
        tower_of_hanoi(n - 1, temp, to, from);
    }
}

int main()
{
    int n;
    cout << "How many disks? ";
    cin >> n;
    tower_of_hanoi(n, 'A', 'C', 'B');
}