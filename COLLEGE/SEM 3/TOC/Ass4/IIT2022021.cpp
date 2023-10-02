#include<bits/stdc++.h>
using namespace std;

int main()
{
    int no_of_states_nfa, no_of_symbols;
    cout << "Enter number of states in your NFA: ";
    cin >> no_of_states_nfa;
    cout << "Enter number of symbols in your NFA: ";
    cin >> no_of_symbols;

    vector<vector<vector<int>>> nfa;
    vector<int> initial_state;
    map<int,int> final_state;

    for (int i = 0; i < no_of_states_nfa; i++)
    {
        cout << "Current state: " << i << endl;
        int response;
        cout << "Enter 0 if this state is initial state , 1 if it is final state, or -1 if neither: ";
        cin >> response;
        if (response == 1)
            final_state[i] = 1;
        else if (response == 0)
            initial_state.push_back(i);

        vector<vector<int>> temp;
        for (int j = 0; j < no_of_symbols; j++)
        {
            int transitions;
            cout << "Enter number of transitions possible through state q" << i << " when symbol is " << j << ": ";
            cin >> transitions;
            vector<int> temp2(transitions);
            for (int k = 0; k < transitions; k++)
            {
                cout << "Enter Transition " << k + 1 << " :";
                cin >> temp2[k];
            }
            temp.push_back(temp2);
        }
        nfa.push_back(temp);
    }

    // Transition table for NFA
    cout << "The transition table for NFA is: " << endl;
    for (int i = 0; i < no_of_states_nfa; i++)
    {
        for (int j = 0; j < no_of_symbols; j++)
        {
            for (int k = 0; k < nfa[i][j].size(); k++)
            {
                cout << "q" << i << "->" << j << "->q" << nfa[i][j][k] << endl;
            }
        }
    }

    map<vector<int>, int> check_dfa_states;
    vector<vector<int>> dfa_states;
    map<vector<int>, int> dfa_state_index;


    vector<vector<int>> queue;
    queue.push_back(initial_state);
    check_dfa_states[initial_state]++;
    dfa_states.push_back(initial_state);
    dfa_state_index[initial_state] = 0;
    vector<vector<int>> dfa;

    while (!queue.empty())
    {
        vector<int> temp = queue.back(); // Changed &temp to temp
        queue.pop_back();
        vector<int> temp3;

        vector<int> dfa_transitions(no_of_symbols, -1); // Initialize with -1

        for (int i = 0; i < no_of_symbols; i++)
        {
            vector<int> temp2;
            map<int, int> check;
            for (int j = 0; j < temp.size(); j++)
            {
                for (int k = 0; k < nfa[temp[j]][i].size(); k++)
                {
                    if (!check[nfa[temp[j]][i][k]])
                    {
                        temp2.push_back(nfa[temp[j]][i][k]);
                        check[nfa[temp[j]][i][k]]++;
                    }
                }
            }

            if (temp2.size() != 0)
            {
                if (!check_dfa_states[temp2])
                {
                    dfa_states.push_back(temp2);
                    dfa_state_index[temp2] = dfa_states.size() - 1; // Fixed typo (initial_state to temp2)
                    queue.push_back(temp2);
                    check_dfa_states[temp2]++;
                }
                temp3.push_back(dfa_state_index[temp2]);
            }
            else
                temp3.push_back(-1);
            
            dfa_transitions[i] = dfa_state_index[temp2]; // Store DFA transition
        }
        
        dfa.push_back(dfa_transitions); // Store DFA transitions for current state
    }

    

    // Transition table for DFA
    cout << "The transition table for DFA is: " << endl;
    for (int i = 0; i < dfa_states.size(); i++)
    {
        for (int j = 0; j < no_of_symbols; j++)
        {
            cout << "q" << i << "->" << j << "->q" << dfa[i][j] << endl;
        }
    }

    cout<<"The initial states of dfa are : ";
    for(int i=0;i<initial_state.size();i++)
    cout<<initial_state[i]<<" ";
    cout<<endl;
    cout << "The final states of dfa are : ";
for (int i = 0; i < dfa_states.size(); i++)
{
    for (int j = 0; j < dfa_states[i].size(); j++)
    {
        if (final_state[dfa_states[i][j]])
        {
            cout << i << " ";
            break; 
        }
    }
}
cout << endl;

    

    return 0;
}