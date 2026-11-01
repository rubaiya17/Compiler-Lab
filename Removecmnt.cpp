#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream fin("input.txt");
    char ch;

    if (!fin.is_open()) return 1;

    while (fin.get(ch)) {
        if (ch == '"') {
            cout << ch;
            while (fin.get(ch)) {
                cout << ch;
                if (ch == '\\') {
                    if (fin.get(ch)) cout << ch;
                } else if (ch == '"') break;
            }
        }
        else if (ch == '/') {
            if (fin.peek() == '/') {
                fin.get();
                while (fin.get(ch) && ch != '\n');
                cout << '\n';
            }
            else if (fin.peek() == '*') {
                fin.get();
                while (fin.get(ch)) {
                    if (ch == '*' && fin.peek() == '/') {
                        fin.get();
                        break;
                    }
                }
            }
            else {
                cout << ch;
            }
        }
        else {
            cout << ch;
        }
    }

    fin.close();
    return 0;
}
