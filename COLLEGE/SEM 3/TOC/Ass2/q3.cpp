#include <bits/stdc++.h>
using namespace std;

bool NFA(map<pair<int,int>,vector<int>> &adjList,string &s,int ptr,vector<int> &final,int state){
    if (ptr == s.size())
        return count(final.begin(),final.end(),state) == 1;

    for (auto &x : adjList[{state,s[ptr]-'a'}]){
        if (x == -1)
            return false;
        bool ans = NFA(adjList,s,ptr+1,final,x);
        if (ans)
            return true;
    }
    return false;
}

int main(){

    cout << "Enter transition table row and col : ";
    int row,col; cin >> row >> col;
    cout << "Enter transition table \n";
    map<pair<int,int>,vector<int>> adjList;
    for (int i = 0;i < row;i++){
        for (int j = 0;j < col;j++){
            // cout << "Enter size of transition corresponding to  " << i << " " << j << ":";
            int size; cin >> size;
            // cout << "Enter transition of size " << size << " : ";
            for (int k = 0;k < size;k++){
                int temp; cin >> temp;
                adjList[{i,j}].push_back(temp);
            }
        }
    }
    cout << "Enter final states : " ;
    int sfinal; cin >> sfinal; vector<int> final;
    for (int i = 0;i < sfinal;i++){
        int temp; cin >> temp;
        final.push_back(temp);
    }
    cout << "\nEnter string to check : ";
    string s; cin >> s;

    int ptr = 0;
    bool ans = NFA(adjList,s,ptr,final,0);
    if (ans)
        cout << "YES, string is accepted " << endl;
    else
        cout << "NO, string is rejected" << endl;

 //for part(a)
    // row col : 5 2 
    // table : 1 1 1 2 1 1 1 3 1 4 1 2 2 1 3 1 3 1 4 1 2 4
    // final state : 2(size) 1 2;
    // string  : "user choice";
// 5 2 1 1 1 2 1 1 1 3 1 4 1 2 2 1 3 1 3 1 4 2 2 4 2 1 2
//for part(b)
    // row col : 
    // table : 
    // final state : 
    // string  : "user choice";
//
}