#include <bits/stdc++.h>
using namespace std;

bool NFA(vector<int> table[4][2],string &s,int idx,vector<int> &finalStates, int state) {
    if (idx == s.size()) return find(finalStates.begin(),finalStates.end(),state) != finalStates.end(); //if index = string size, find if the state is in finalstate or not
    for (int &id : table[state][s[idx] - 'a']){  // iterate in transition table
        if (id == -1) return false;
        if (NFA(table,s,idx+1,finalStates,id)) return true;
    }
    return false;
}

int main() {
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    // vector<int> table[4][2] = {{{1,3},{2,3}} , {{1,3},{1}} , {{2},{2,3}}, {{-1},{-1}}};
    vector<int> table[4][2] = {{{1},{-1}} , {{-1},{2}} , {{1,3},{2}}, {{-1},{-1}}};
    vector<int> finalStates = {3};
    if (NFA(table,s,0,finalStates,0)) cout<<"The string is ACCEPTED\n";
    else cout<<"The string is REJECTED\n";
}