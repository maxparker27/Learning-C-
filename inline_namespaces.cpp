#include <iostream>
using namespace std;

inline namespace first_namespace
{
    void outputValue()
    {
        cout << "Using first namespace.\n";
    }
}

namespace second_namespace
{
    void outputValue()
    {
        cout << "Using second namespace.\n";
    }
}

int main() 
{
    first_namespace::outputValue();
    second_namespace::outputValue();

    outputValue(); //uses first namespace since it is inline

    return 0;
}