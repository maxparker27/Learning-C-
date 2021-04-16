#include<iostream>
#define DO_ADD
#define DO_MULT


int add(int x, int y) {
    return x + y;
}

int mult(int x, int y) {
    return x * y;
}

int getInteger() {
	int x{ };
	
	std::cout << "Please enter your first number: \n";
	std::cin >> x;

	return x;
}

int getSecondInteger() {
	int y{ };
	
	std::cout << "Please enter your second number: ";
	std::cin >> y;

	return y; 	  
}

void doMultPrint() {
	std::cout << "We will now multiply together your two numbers. ";
}

void doAddPrint() {
	std::cout << "We will now sum together your two numbers. ";
}


int main() {

	int x { getInteger() };
	int y { getSecondInteger() };

	#ifdef DO_MULT
	doMultPrint();
	std::cout << "The product of x and y = " << add(x, y) << ".\n";
	#endif

	#ifdef DO_ADD
	doAddPrint();
	std::cout << "The sum of x and y = " << add(x, y) << ".\n";
	#endif 

	return 0;
}