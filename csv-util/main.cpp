#include <iostream>
#include "CSV_Util.h"
int main(void)
{
	// Creating a table object ( Easy enough! haha )
	CSV_Table tab;

	// Reading the data into the table       v -- Pass a reference
	try
	{
		CSV_Util::read("NOT_A_REAL_FILE.csv", tab);
	}
	catch (...) // If it fails to read the file
	{
		std::cout << CSV_Util::getError();
	}

	// Reading the data into the table       v -- Pass a reference
	try
	{
		CSV_Util::read("test-data/test.csv", tab);
	}
	catch (...) // If it fails to read the file (It wont this time lol)
	{
		std::cout << CSV_Util::getError();
	}

	// Getting an element examples:
	std::string eStr = tab.getElement(0, 0);			//  Gets a string representation of element at 0,0
	int eInt =		   tab.getElementInt(1, 4);		//  Gets a integer representation of element at 1,4
	float eFloat =	   tab.getElementFloat(1, 5);			//  Gets a float representation of element at 1,5
	double eDouble =   tab.getElementDouble(1, 9);			//  Gets a double representation of element at 1,9

	
	// Cheeky whitespace formatting
	std::cout	
		<< eStr << '\n'
		<< eInt << '\n'
		<< eFloat << '\n'
		<< eDouble << 
	std::endl;

	// Example error catching
	try
	{
		// Element out of bounds
		tab.getElementDouble(-1, 0);
	}
	catch (std::exception e)
	{
		std::cout << e.what() << '\n';
	}

	try
	{
		// Bad Conversion
		tab.getElementDouble(0, 0); // <-- Is not a double 0,0 is "Image Index"
	}
	catch (std::exception e)
	{
		std::cout << e.what() << '\n';
	}


}
