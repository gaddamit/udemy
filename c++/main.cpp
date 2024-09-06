

// Unit test function
#include <iostream>
#include <string>
using namespace std;


// Main function to run the tests
int main() {
    int* a{0};
    *a = 0;
    a = 0;

    //pointer to constant integer
    const int *b{0};
    *b = 0;         // not allowed
    b = 0;

    //same declaration as above
    int const *c{0};
    *c = 0;         // not allowed
    c = 0;         

    //constant pointer to constant integer
    const int * const d{0};
    *d = 0;         // not allowed
    d = 0;          // not allowed

    //similar declaration as above
    int const * const e{0};
    *e = 0;         // not allowed
    e = 0;          // not allowed
    return 0;
}