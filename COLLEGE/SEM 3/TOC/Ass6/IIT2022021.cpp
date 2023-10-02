#include <bits/stdc++.h>
using namespace std;

class DFA
{
public:
    int numStates;
    set<char> alphabet;
    vector<map<char, int>> transitions;
    int startState;
    set<int> finalStates;

    DFA(int states)
    {
        numStates = states;
        transitions.resize(states);
    }

    void addTransition(int from, char input, int to)
    {
        transitions[from][input] = to;
        alphabet.insert(input);
    }

    void setStartState(int state)
    {
        startState = state;
    }

    void setFinalState(int state)
    {
        finalStates.insert(state);
    }
};

void minimizeDFA(DFA &dfa)
{
    vector<set<int>> P;
    set<int> nonFinalStates, finalStates;

    for (int i = 0; i < dfa.numStates; ++i)
    {
        if (dfa.finalStates.count(i))
        {
            finalStates.insert(i);
        }
        else
        {
            nonFinalStates.insert(i);
        }
    }

    P.push_back(finalStates);
    P.push_back(nonFinalStates);

    vector<set<int>> W;
    W.push_back(finalStates);

    while (!W.empty())
    {
        set<int> A = *(W.begin());
        W.erase(W.begin());

        for (char c : dfa.alphabet)
        {
            set<int> X, Y;

            for (int state : A)
            {
                if (dfa.transitions[state][c] != 0)
                {
                    int targetState = dfa.transitions[state][c];

                    if (P[0].count(state) && P[0].count(targetState))
                    {
                        X.insert(state);
                    }
                    else
                    {
                        Y.insert(state);
                    }
                }
            }

            if (!X.empty() && !Y.empty())
            {
                for (auto itr = P.begin(); itr != P.end(); itr++)
                {
                    if (*itr == A)
                    {
                        P.erase(itr);
                        break;
                    }
                }
                P.push_back(X);
                P.push_back(Y);

                if (count(W.begin(), W.end(), A))
                {
                    for (auto itr = W.begin(); itr != W.end(); itr++)
                    {
                        if (*itr == A)
                        {
                            W.erase(itr);
                            break;
                        }
                    }
                    W.push_back(X);
                    W.push_back(Y);
                }
                else
                {
                    if (X.size() <= Y.size())
                    {
                        W.push_back(X);
                    }
                    else
                    {
                        W.push_back(Y);
                    }
                }
            }
        }
    }

    DFA minimizedDFA(P.size());

    map<int, int> stateMap;
    for (int i = 0; i < P.size(); ++i)
    {
        for (int state : P[i])
        {
            stateMap[state] = i;
            if (dfa.startState == state)
            {
                minimizedDFA.setStartState(i);
            }
        }
        if (P[i].size() > 0 && dfa.finalStates.count(*(P[i].begin())))
        {
            minimizedDFA.setFinalState(i);
        }
    }

    for (int i = 0; i < P.size(); ++i)
    {
        for (char c : dfa.alphabet)
        {
            int targetState = dfa.transitions[*(P[i].begin())][c];
            int minimizedTarget = stateMap[targetState];
            minimizedDFA.addTransition(i, c, minimizedTarget);
        }
    }

    cout << "Minimized DFA:\n";
    cout << "Number of states: " << P.size() << endl;
    cout << "Alphabet: ";
    for (char c : minimizedDFA.alphabet)
    {
        cout << c << " ";
    }
    cout << endl;
    cout << "Start state: " << minimizedDFA.startState << endl;
    cout << "Final states: ";
    for (int state : minimizedDFA.finalStates)
    {
        cout << state << " ";
    }
    cout << endl;

    for (int i = 0; i < P.size(); ++i)
    {
        for (char c : minimizedDFA.alphabet)
        {
            cout << "Transition from state " << i << " on input " << c << " goes to state " << minimizedDFA.transitions[i][c] << endl;
        }
    }
}

int main()
{
    DFA dfa(7);
    dfa.addTransition(0, '0', 1);
    dfa.addTransition(0, '1', 2);
    dfa.addTransition(1, '0', 5);
    dfa.addTransition(1, '1', 4);
    dfa.addTransition(2, '0', 6);
    dfa.addTransition(2, '1', 4);
    dfa.addTransition(3, '0', 0);
    dfa.addTransition(3, '1', 4);
    dfa.addTransition(4, '0', 4);
    dfa.addTransition(4, '1', 4);
    dfa.addTransition(5, '0', 5);
    dfa.addTransition(5, '1', 5);
    dfa.addTransition(6, '0', 6);
    dfa.addTransition(6, '1', 6);

    dfa.setStartState(0);
    dfa.setFinalState(5);
    dfa.setFinalState(6);

    minimizeDFA(dfa);
    return 0;
}