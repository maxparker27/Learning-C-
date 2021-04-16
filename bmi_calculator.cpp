#include<iostream>
#include<cmath>

double calculateBMI(double x, double y)
{
    double metre_height = (double) std::pow(y/100, 2);
    double BMI = x / metre_height;
    return BMI;
}

int main () 
{
    double weight, height;
    std::cout << "What is your weight? (kg)?\n";
    std::cin >> weight;

    std::cout << "What is your height in cm?\n";
    std::cin >> height;

    double BMI{calculateBMI(weight, height)};
    std::cout << "Your BMI is: " << BMI << "\n";

    if (BMI < 18.5)
        std::cout << "You are underweight.\n";
    else if (BMI >= 18.5 && BMI <= 24.9)
        std::cout << "You are healthy!\n";
    else if (BMI >= 25 && BMI <= 29.9)
        std::cout << "You are overweight.\n";
    else
        std::cout << "You are obese.\n";
    
    return 0;
}