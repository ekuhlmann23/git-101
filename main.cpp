#include <iostream>
#include <string>

// This is the main function.
int main() {
	std::cout << "Please type your name: ";
	std::string name;
	std::cin >> name;
	std::cout << "Hello there, " << name << "!!!" << std::endl;
	
	return 0;
}
