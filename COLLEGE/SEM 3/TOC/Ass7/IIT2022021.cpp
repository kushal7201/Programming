// Kushal Bansal---IIT2022021

#include <bits/stdc++.h>
using namespace std;

int index = 0;
void printProduction(const string &LHS, const string &RHS)
{
    cout << LHS << " -> " << RHS << endl;
}

bool match(string &input, char symbol)
{
    if (index < input.length() && input[index] == symbol)
    {
        index++;
        return true;
    }
    return false;
}

bool For_A(string &input)
{
    int originalIndex = index;
    if (match(input, '0'))
    {
        printProduction("A", "0A");
        return For_A(input);
    }
    else
    {
        index = originalIndex;
        printProduction("A", "NULL");
        return true;
    }
}

bool For_B(string &input)
{
    int originalIndex = index;
    if (match(input, '0'))
    {
        printProduction("B", "0B");
        return For_B(input);
    }
    else if (match(input, '1'))
    {
        printProduction("B", "1B");
        return For_B(input);
    }
    else
    {
        index = originalIndex;
        printProduction("B", "NULL");
        return true;
    }
}

bool For_S(string &input)
{
    printProduction("S", "A1B");
    return For_A(input) && match(input, '1') && For_B(input);
}

int main()
{
    string input;
    cout << "Enter an input string (0s and 1s only): ";
    cin >> input;

    index = 0;
    if (For_S(input) && index == input.length())
    {
        cout << "The Input string in the language." << endl;
    }
    else
    {
        cout << "The Input string not in the language." << endl;
    }

    return 0;
}
