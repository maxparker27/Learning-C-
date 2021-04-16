#include <string>
#include <iostream>

//this is for the use of std::ws
#include <iomanip>

int main()
{
    int x;
    std::cout << "Pick a number: ";
    std::cin >> x;

    std::string name{ };
    std::cout << "Enter your name: ";

    //this is where std::ws works
    std::getline(std::cin >> std::ws, name); //this line gets the full name

    std::cout << "Hello " << name << ", you picked the number " << x << '\n';
    
    return 0;
}