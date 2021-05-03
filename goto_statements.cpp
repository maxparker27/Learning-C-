#include <iostream>
using namespace std;

int main() 
{
    int x{ };
    Repeat:  // beginning of Repeat statement:
        cout << "Enter a number greater than 0: ";
        cin >> x;

    if (x < 0)
    {
        cout << "Please try again.\n";
        goto Repeat;
    }

    cout << "Your number squared is " << x * x << ".\n";
    return 0;
}