#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main()
{
    int scores[]{0,0,0,0};
    for(auto score : scores)
    {
        cout << score << endl;
    }

    for(auto temp : {1,2,3,4,5})
    {
        cout << temp << endl;
    }

    for(auto c : "This is a test")
    {
        cout << c << endl;
    }
    return 0;
}