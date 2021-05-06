#include <iostream>
using namespace std; 

int main() 
{
    int counter{ 1 };

    while (counter <= 20)
    {
        cout << counter << ' ';

        //each ten numbers printing to a new line
        if (counter % 10 == 0)
        {
            cout << '\n';
        }   
        
        //incrementing the loop counter by 1:
        ++counter;
    }

    return 0; 
}