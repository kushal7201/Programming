#include <bits/stdc++.h>
using namespace std;
map<pair<int, char>, vector<int>> transitions;
map<int, vector<int>> epclosure;

int main()
{   // Fill the transiton table
    transitions[{0, 'b'}] = {1};
    transitions[{1, 'a'}] = {1, 2};
    transitions[{1, 'b'}] = {2};
    transitions[{2, 'a'}] = {0};
    // fill the epsilon closure of states
    epclosure[0] = {0, 2};
    epclosure[1] = {1};
    epclosure[2] = {2};

    string s;
    cout << "Enter string : ";
    cin >> s;
    cout << s << endl;

    stack<int> prev, cur;
    prev.push(0);

    // Add the initial state to cur to handle epsilon transitions
    cur.push(0);

    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < prev.size(); j++)
        {
            int cur_s = prev.top(); // save current_symbol as top of previous stack
            prev.pop();

            set<int> temp1, temp2;
            for (auto i1 : epclosure[cur_s]) // firstly the epsilon_closure of states
            {
                for (auto i2 : transitions[{i1, s[i]}])  // transitions at those epsilon_closure states
                    temp1.insert(i2);
            }
            for (auto i1 : temp1)
            {
                for (auto i2 : epclosure[i1])  // epsilon closure of obtained states
                    temp2.insert(i2);
            }
            for (auto i1 : temp2)
                cur.push(i1);
        }
        prev.swap(cur);
    }

    int flag = 0;
    int prev_size = prev.size();
    for (int i = 0; i < prev_size; i++)
    {
        if (prev.top() == 0)
            flag = 1;
        prev.pop();
    }
    if (flag == 1)
        cout << "Accepted" << endl;
    else
        cout << "Rejected" << endl;
    return 0;
}
