#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main()
{
    int score = 89;
    if (score > 90)
        if (score > 95)
            cout << "A+";
        else
            cout << "A";
    else
        cout << "B";

    return 0;
}