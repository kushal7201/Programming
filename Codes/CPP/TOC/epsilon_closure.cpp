#include <bits/stdc++.h>
using namespace std;

void epsilon_clo(vector<int> transition[3][3], int state){
    static set<int> s;  // Declare set to store the states reachable. It stores same state only once
    s.insert(state);
    bool flag =1;  // To check if already all states are reachable
    if(s.size()!=3) flag =0;
    for(int &id: transition[state][2]){
        if(id==-1||flag==1){
            cout<<"Epsilon closure: ";
            for(auto it: s) cout<<it<<" ";
            return;
        }        
        else epsilon_clo(transition,id);
    }
}

int main()
{
    vector<int> transition[3][3]= {{{0},{-1},{1}},{{-1},{1},{2}},{{2},{2},{-1}}};
    // vector<int> transition[3][3]= {{{-1},{1},{2}},{{1,2},{2},{-1}},{{0},{-1},{-1}}};
    vector<int> final_state = {0};
    epsilon_clo(transition, 0);
    return 0;
}