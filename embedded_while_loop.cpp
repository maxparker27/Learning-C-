#include <iostream>
using namespace std;

int main() 
{
    int outer_counter{ 0 };

    while (outer_counter <= 5)
    {
        
        int inner_counter{ 0 };
        
        // beginning of inner while loop:
        while (inner_counter <= outer_counter)
        {
            cout << inner_counter << ' ';
            ++inner_counter;
        }
        
        cout << '\n';
        ++outer_counter;
    }

    return 0;
}

// outputs:
// 0 
// 0 1 
// 0 1 2 
// 0 1 2 3 
// 0 1 2 3 4 
// 0 1 2 3 4 5 