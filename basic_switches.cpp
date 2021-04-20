#include <iostream>
using namespace std;

void hungerLevel(int x)
{
    switch (x)
    {
        case 1:
            cout << "Very Hungry\n";
            break;
        case 2:
            cout << "Hungry\n";
            break;
        case 3:
            cout << "Not too hungry\n";
            break;
        case 4:
            cout << "Not hungry\n";
            break;
        case 5:
            cout << "Stuffed\n";
            break;
    }

    cout << "Broke out of the switch statement!\n";
}

int main()
{
    hungerLevel(3);
    
    hungerLevel(1);

    return 0;
}