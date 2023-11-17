// Elisabeth Sykorova
// Aleksandra Skarzycka

#include<iostream>
#include<string>

char printMenu();
float fahrenheitToCelsius();

int main()
{
	char userChoice = ' ';
	userChoice = printMenu();

	if (userChoice == 'f')
	{
		fahrenheitToCelsius();
	}
	return 1;
}

char printMenu()
{
	char userChoice = ' '; // user input
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

	std::cin >> userChoice;
	return userChoice;
}

float fahrenheitToCelsius()
{
	// variables
	float fahrenheit = 0.0f;
	float celsius = 0.0f;

	// user input
	std::cout << "Enter in the fahrenheit:";
	std::cin >> fahrenheit;

	// converting fahrenheit to celsius
	celsius = (fahrenheit - 32) * (5.0) / 9;

	// displaying the conversion
	std::cout << "The fahrenheit converts to " << celsius << " Celsius.";
}