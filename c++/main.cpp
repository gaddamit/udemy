#include <iostream>
#include <vector>

using namespace std;
int main() {
    int arr[10][10]{0};
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            cout << arr[i][j] << " ";
        }
    }
    return 0;
}