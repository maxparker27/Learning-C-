#include <iostream>
using namespace std;

int foo() 
{
    cout << "You picked option 1.\n";
}

int main() 
{   
    cout << "Insert a value [0, 1]: ";
    int x{ };
    cin >> x;
    
    switch(x) //in this case, switches are more applicable than if statement
    {
        case 1: 
            foo();
            break;
        default:
            cout << "Resorting to default value.\n";
            break;
    }   
    return 0;
}