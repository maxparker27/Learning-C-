#include <iostream>
using namespace std;

namespace adding 
{
    int my_function(int x, int y)
    {
        return x + y;
    }
}

namespace subtracting
{
    int my_function(int x, int y)
    {
        return x - y;
    }
}


int main()
{
    int x{ };
    cout << "Please enter your first number: ";
    cin >> x;

    int y{ };
    cout << "Please enter your second number: ";
    cin >> y;

    cout << "Adding your numbers together = " << adding::my_function(x, y) << '\n';
    cout << "Subtracting number 2 from number 1 = " << subtracting::my_function(x, y) << '\n';

    return 0;
}