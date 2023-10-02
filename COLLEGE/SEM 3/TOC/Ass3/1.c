#include <stdio.h>
#include <stdbool.h>

#define MAX_STATES 50
#define MAX_TRANSITIONS 50

// Structure to represent a transition in the NFA
struct Transition {
    int nextState;
    char symbol;
};

// Structure to represent a state in the NFA
struct State {
    int stateNumber;
    struct Transition transitions[MAX_TRANSITIONS];
    int numTransitions;
};

// Function to calculate epsilon closure of a state
void epsilonClosure(struct State nfa[], int currentState, bool visited[]) {
    visited[currentState] = true;
    
    for (int i = 0; i < nfa[currentState].numTransitions; i++) {
        if (nfa[currentState].transitions[i].symbol == 'e' &&
            !visited[nfa[currentState].transitions[i].nextState]) {
            epsilonClosure(nfa, nfa[currentState].transitions[i].nextState, visited);
        }
    }
}

int main() {
    int numStates, numSymbols;
    printf("Enter the number of states: ");
    scanf("%d", &numStates);
    
    struct State nfa[MAX_STATES];
    for (int i = 0; i < numStates; i++) {
        nfa[i].stateNumber = i;
        
        printf("Enter the number of transitions for state %d: ", i);
        scanf("%d", &nfa[i].numTransitions);
        
        printf("Enter transitions for state %d:\n", i);
        for (int j = 0; j < nfa[i].numTransitions; j++) {
            printf("Symbol for transition %d: ", j);
            scanf(" %c", &nfa[i].transitions[j].symbol);
            printf("Next state for transition %d: ", j);
            scanf("%d", &nfa[i].transitions[j].nextState);
        }
    }
    
    for (int i = 0; i < numStates; i++) {
        bool visited[MAX_STATES] = {false};
        epsilonClosure(nfa, i, visited);
        
        printf("Epsilon closure of state %d: {", i);
        for (int j = 0; j < numStates; j++) {
            if (visited[j]) {
                printf(" %d", j);
            }
        }
        printf(" }\n");
    }
    
    return 0;
}
