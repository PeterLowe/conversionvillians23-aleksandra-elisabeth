// Elisabeth Sykorova
// Aleksandra Skarzycka

#include<iostream>
#include<string>

char printMenu();

void degreesToRadians();

void fahrenheitToCelsius();

void stoneAndPoundsToKilograms();

int main()
{
	char userChoice = ' ';
	userChoice = printMenu();

	if (userChoice == 'A')
	{
		degreesToRadians();
	}

	if (userChoice == 'f')
	{
		fahrenheitToCelsius();
	}

	if (userChoice == 'e')
	{
		stoneAndPoundsToKilograms();
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

void degreesToRadians() // user inputs degrees, that gets converted to radians.
{
	const float PI = 3.14;
	float degrees = 0;
	float radians = 0;
	std::cout << "Enter the amount of degrees: ";
	std::cin >> degrees;
	
	radians = degrees * (PI / 180); // calculates the radian value

	std::cout << "The value " << degrees << " degrees is equal to " << radians << " radians." << std::endl; // the result
}

void fahrenheitToCelsius()
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

void stoneAndPoundsToKilograms()
{
	// variables
	float stoneAndPounds = 0.0f;
	float kilograms = 0.0f;

	// user input
	std::cout << "Enter in the amount of stone/pounds:";
	std::cin >> stoneAndPounds;

	// converting stone and pounds to kilograms
	kilograms = stoneAndPounds / 2.2f;

	// displaying the conversion
	std::cout << "The stone/pounds converts to " << kilograms << " kilograms.";

}
