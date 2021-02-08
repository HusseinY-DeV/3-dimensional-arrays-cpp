#include <iostream>

using namespace std;

int main()
{
    int x[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};
    cout << x << endl;
    // The value above is a pointer pointing to a collection of 2  int arrays where in this case is  {{1, 2}, {3, 4}}
    cout << *x << endl;
    // The value above is a pointer pointing to an array of 2 int where in this case is {1, 2}
    cout << **x << endl;
    // The value above is a pointer pointing to the first int in the array which in this case is the memory address of 1
    cout << ***x << endl;
    // The value above is the deferrencing of a pointer pointing to an integer so we get the integer it self where in this case is 1
}