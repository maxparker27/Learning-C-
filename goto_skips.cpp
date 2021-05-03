#include <iostream>
using namespace std;

void printYes(bool value)
{
    if (value) //if value is 1, function will proceed to end
        goto end;

    cout << "You picked False.\n";

    end:
        ;
}


int main()
{
    cout << "Please enter a 1 or 0. Entering a 1 will result in nothing being printed.";
    bool x { };
    cin >> x;

    printYes(x); //if user enters 1, nothing will print since printYes will goto end of function.

    return 0;
}
