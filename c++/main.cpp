#include <iostream>
#include <vector>

using namespace std;
int main() {

    int counter{10};
    int result{0};

    cout << "Counter: " << counter << endl;

    counter = counter + 1;
    cout << "Counter: " << counter << endl;

    cout << "Counter: " << counter++ << endl;

    result = counter++;
    cout << "Counter: " << result << endl;
    return 0;
}