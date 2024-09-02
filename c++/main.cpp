#include <iostream>
#include <vector>
#include <string>

using namespace std;
void print(int apples = 10);
int main()
{
    print(5);
    return 0;
}

void print(int apples)
{
    cout << "I have " << apples << " apples." << endl;
}