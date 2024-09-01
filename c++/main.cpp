#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main()
{
    char c = '$';
    cout << isdigit(c) << endl;
    cout << isalpha(c) << endl;
    cout << isalnum(c) << endl;
    cout << islower(c) << endl;
    cout << isupper(c) << endl;
    cout << isprint(c) << endl;
    cout << ispunct(c) << endl;
    cout << isspace(c) << endl;
    cout << isxdigit(c) << endl;
    return 0;
}