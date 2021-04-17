#include <iostream>
using namespace std;

int main() 
{
    cout << "Please enter a number: ";
    int number{ };
    cin >> number;

    if (number > 0)
    {
        if ((number % 2) == 0)
        {
            cout << "Your value is positive and even.\n";
        }
        else 
            cout << "Your value is positive and odd.\n";
    }
    else 
        cout << "Your value is negative.\n";
    return 0;
}