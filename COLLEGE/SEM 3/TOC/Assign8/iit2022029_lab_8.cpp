#include<bits/stdc++.h>
using namespace std;

vector<pair<char,char>> cfg;    // Vector to store the productions
map<char,char> visited;         // Map to store visited symbols
map<char,int> value;            // Map to store values of symbols

int main()
{
    cout<<"Enter number of Productions : ";
    int n;
    cin>>n;

    // Input productions
    while(n--)
    { 
        char temp1;
        char temp2;
        cout<<"Enter Left side : "<<endl;
        cin>>temp1;
        cout<<"Enter Right side : "<<endl;
        cin>>temp2;
        cfg.push_back({temp1,temp2});  // Add the production to the vector
    }

    // Removing unit productions
    for(auto &it : cfg)
    {
        if(it.second >= 'A' && it.second <= 'Z') // If it is a non-terminal
        {
            value[it.second] = 1 + value[it.first]; // Increase value of the non-terminal
            if(value[it.second] == 1)
            {
                visited[it.second] = it.first;  // Set visited non-terminal to its parent
            }
            else 
            {
                visited[it.second] = visited[it.first];  // Set visited non-terminal to the parent of the parent
            }
        }
        else if (value[it.first] > 0) // If it is a terminal and its parent is marked
        {
            it.first = visited[it.first]; // Replace the terminal with its parent
        }
    }

    // Printing the simplified productions
    for(auto it : cfg)
    {
        if(value[it.first] == 0 && (it.second >= 'a' && it.second <= 'z'))
        {
            cout<<it.first<<" "<<it.second<<endl; // Output simplified production
        }
    }

    return 0;
}
