#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main()
{
    string input;
    getline(cin, input);

    size_t len = input.length();

    string mirror = "";
    for(size_t i = 0; i <= len; i++)
    {
        string temp = input.substr(0, i);
        string rev(mirror.rbegin(), mirror.rend());
        string space((len - i), ' ');
        cout << space << temp << rev << endl;

        mirror = temp;
   }
    return 0;
}