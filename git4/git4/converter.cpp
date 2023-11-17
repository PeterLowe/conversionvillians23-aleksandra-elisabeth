// Elisabeth Sykorova
// Aleksandra Skarzycka

#include<iostream>
#include<string>

char printMenu();

int main()
{
	char choice = ' ';
	choice = printMenu();
	return 1;
}

char printMenu()
{
	char choice = ' '; // user input
	std::cout << "Please enter en upper case leter to convert from left to right\nand lower case letter to convert from right to left\n\n" << std::endl;
	std::cout << "[A]		Degrees		<--->		Radians		[a]" << std::endl;
	std::cout << "[B]		Centimeters	<--->		Feet & Inches	[b]" << std::endl;
	std::cout << "[C]		Litres		<--->		Gallons		[c]" << std::endl;
	std::cout << "[Q]		Exit		[---]		Exit		[q]" << std::endl;
	std::cout << "[D] Mpg    <--->    L/100km [d]" << std::endl;
	std::cout << "[E] Kilograms    <--->    Stone & Pounds [e]" << std::endl;
	std::cout << "[F] Celsius    <--->    Fahrenheit [f]" << std::endl;
	std::cout << "[Q] Exit    <--->    Exit [q]" << std::endl;
	std::cout << "Enter your choice: ";

	std::cin >> choice;
	return choice;
}