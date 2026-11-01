#include <iostream>
#include <string>
using namespace std;

int main()
{
    int choice;
    string str;

    cout << "1. Starts with 'a' and ends with 'b'" << endl;
    cout << "2. Starts and ends with same symbol" << endl;
    cout << "3. Binary string of even length" << endl;
    cout << "4. Binary string of odd length" << endl;

    cout << "\nEnter your choice: ";
    cin >> choice;

    cout << "Enter a string: ";
    cin >> str;

    switch (choice)
    {
        case 1:
            if (str[0] == 'a' && str[str.length() - 1] == 'b')
                cout << "Accepted";
            else
                cout << "Not Accepted";
            break;

        case 2:
            if (str[0] == str[str.length() - 1])
                cout << "Accepted";
            else
                cout << "Not Accepted";
            break;

        case 3:
        {
            bool binary = true;

            for (char c : str)
            {
                if (c != '0' && c != '1')
                {
                    binary = false;
                    break;
                }
            }

            if (binary && str.length() % 2 == 0)
                cout << "Accepted";
            else
                cout << "Not Accepted";

            break;
        }

        case 4:
        {
            bool binary = true;

            for (char c : str)
            {
                if (c != '0' && c != '1')
                {
                    binary = false;
                    break;
                }
            }

            if (binary && str.length() % 2 != 0)
                cout << "Accepted";
            else
                cout << "Not Accepted";

            break;
        }

        default:
            cout << "Invalid Choice";
    }

    return 0;
}
