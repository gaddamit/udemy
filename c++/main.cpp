#include <iostream>

using namespace std;
int main() {
    char name[50];
    wchar_t wname[50];
    char16_t c16name[50];
    char32_t c32name[50];
    cout << sizeof(c32name) << endl;
    return 0;
}