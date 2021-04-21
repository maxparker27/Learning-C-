#include <iostream>
using namespace std;

int main() 
{
    switch(2)
    {
        case 1:
            cout << 1 << '\n';
            break;
        case 2:
            cout << 2 << '\n';
            [[fallthrough]];
        case 3:
            cout << 3 << '\n';
            break;
    }

    return 0;
}