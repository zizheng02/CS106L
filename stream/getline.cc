#include <iostream>

using namespace std;

int main()
{
    // Enter a sentence like "Hello World 42!" first with getline then with >>
    string line;
    // cin >> line;
    getline(cin, line);
    cout << "OUTPUT: " << line << endl;

    return 0;
}
