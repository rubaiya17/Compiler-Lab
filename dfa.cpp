#include <iostream>
using namespace std;

int main()
{
    int n, m, t;

    cout << "Enter number of states: ";
    cin >> n;

    cout << "Enter number of symbols: ";
    cin >> m;

    cout << "Enter number of transitions: ";
    cin >> t;

    int count[10][10] = {0};

    cout << "Enter transitions (from symbol to):\n";

    for(int i = 0; i < t; i++)
    {
        int from, symbol, to;

        cin >> from >> symbol >> to;

        count[from][symbol]++;
    }

    bool dfa = true;


    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(count[i][j] != 1)
            {
                dfa = false;
            }

            if(count[i][j] > 1)
            {
                cout << "NFA";
                return 0;
            }
        }
    }

    if(dfa)
        cout << "DFA";
    else
        cout << "Not DFA (incomplete transition table)";

    return 0;
}
