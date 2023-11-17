// Elisabeth Sykorova
// Aleksandra Skarzycka

#include<iostream>
#include<string>

char printMenu();

void degreesToRadians();

void fahrenheitToCelsius();

void centimetersToFeetAndInches();

void stoneAndPoundsToKilograms();

void litresKmToMpg();

void litresToGallons();

void radiansToDegrees();

void mpgToLitresKm();



int main()
{
	char userChoice = ' ';
	userChoice = printMenu();

	if (userChoice == 'A')
	{
		degreesToRadians();
	}

	if (userChoice == 'B')
	{
		centimetersToFeetAndInches();
	}

	if (userChoice == 'C')
	{
		litresToGallons();
	}

	if (userChoice == 'D')
	{
		mpgToLitresKm();
	}

	if (userChoice == 'd')
	{
		litresKmToMpg();
	}

	if (userChoice == 'f')
	{
		fahrenheitToCelsius();
	}

	if (userChoice == 'e')
	{
		stoneAndPoundsToKilograms();
	}

	if (userChoice == 'a')
	{
		radiansToDegrees();
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
	std::cout << "[D]		Mpg		<--->		L/100km		[d]" << std::endl;
	std::cout << "[E]		Kilograms	<--->		Stone & Pounds	[e]" << std::endl;
	std::cout << "[F]		Celsius		<--->		Fahrenheit	[f]" << std::endl;
	std::cout << "[Q]		Exit		<--->		Exit		[q]" << std::endl;
	std::cout << "Enter your choice: ";

	std::cin >> userChoice;
	return userChoice;
}

void degreesToRadians() // user inputs degrees, that gets converted to radians.
{
	const float PI = 3.14f;
	float degrees = 0.0f;
	float radians = 0.0f;
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
	celsius = (fahrenheit - 32) * (5.0f) / 9;

	// displaying the conversion
	std::cout << "The fahrenheit converts to " << celsius << " Celsius.";
}

void centimetersToFeetAndInches()
{
	float centimeters = 0.0f;
	int feet = 0;
	float inches = 0.0f;

	std::cout << "Enter the amount of centimeters: ";
	std::cin >> centimeters; // user input for centimeters

	feet = centimeters * (3.28084f / 100); // calculates the feet (int cuts off any decimals that go into inches)
	inches = ((centimeters * (3.28084f / 100)) - feet) * 12; // calculates the inches remaining

	std::cout << "The entered value is equal to " << feet << " feet and " << inches << " inches." << std::endl;
}

void stoneAndPoundsToKilograms()
{
	// variables
	float stoneAndPounds = 0.0f;
	float kilograms = 0.0f;

	// user input
	std::cout << "Enter in the amount of stone/pounds: ";
	std::cin >> stoneAndPounds;

	// converting stone and pounds to kilograms
	kilograms = stoneAndPounds / 2.2f;

	// displaying the conversion
	std::cout << "The stone/pounds converts to " << kilograms << " kilograms.";

}

void litresKmToMpg()
{
	// variabled
	float litrePer100km = 0.0f;
	float mpg = 0.0f;

	// user input
	std::cout << "What is the Litres per 100km?";
	std::cin >> litrePer100km;

	// converting L/100km to Mpg
	mpg = litrePer100km / 282.48f;

	// displaying the conversion
	std::cout << "The Litres per 100km converts to " << mpg << " Miles Per Gallon.";
}

void litresToGallons()
{
	float litres = 0.0f;
	float gallons = 0.0f;

	std::cout << "Enter the value in litres: ";
	std::cin >> litres;

	gallons = litres * 0.264172f;

	gallons = litres * 0.264172; // calculates the gallons from the litres value


	std::cout << "The value of " << litres << " litres is equal to " << gallons << " gallons." << std::endl;
}

void radiansToDegrees()
{
	// variables
	const float PI = 3.14f;
	float degrees = 0.0f;
	float radians = 0.0f;

	// user input
	std::cout << "Enter in the amount of radians:";
	std::cin >> radians;

	// converting radians to degrees
	degrees = radians * (180 / PI);

	// displaying the conversion
	std::cout << "The radians conver to " << degrees << " degrees.";
}

void mpgToLitresKm()
{
	float mpg = 0.0f;
	float litresPer100km = 0.0f;

	std::cout << "Enter the value in mpg: ";
	std::cin >> mpg;

	litresPer100km = 235.214583 / mpg;

	std::cout << "The value in litres per 100 km is equal to: " << litresPer100km << std::endl;

}
