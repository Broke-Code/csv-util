#pragma once
#include <vector>
#include <string>
#include <iostream>
#include <stdexcept>


class CSV_Table
{
public:
	// Returns a reference to the raw table
	std::vector<std::vector<std::string>>& getTable();

	/**
	* Dumps the content of the table to the console
	*/
	const void consoleDump() const;

	/**
	* Retrieves specified row of the table
	*
	* @param line_index - The index of the row
	*
	* @throws InvalidArugment If the index is out of bounds
	* 
	* @result Vector containing the line of the table,
	*		  Empty vector if error
	*/
	std::vector<std::string> getLine(const uint32_t line_index);

	/**
	* Retrieves specified element
	*
	* @param row - The row of the element
	* @param column - The column of the element
	*
	* @throws InvalidArugment If the index is out of bounds
	* 
	* @result String containing specified element,
	*		  Empty string if error
	*/
	std::string getElement(const uint32_t row, const uint32_t column);
	
	/**
	* Retrieves specified element
	*
	* @param row - The row of the element
	* @param column - The column of the element
	*
	* @throws InvalidArugment If the index is out of bounds
	*
	* @result String containing specified element,
	*		  Empty string if error
	*/
	int getElementInt(const uint32_t row, const uint32_t column);
	/**
	* Retrieves specified element
	*
	* @param row - The row of the element
	* @param column - The column of the element
	*
	* @throws InvalidArugment If the index is out of bounds
	*
	* @result String containing specified element,
	*		  Empty string if error
	*/

	float getElementFloat(const uint32_t row, const uint32_t column);
	/**
	* Retrieves specified element
	*
	* @param row - The row of the element
	* @param column - The column of the element
	*
	* @throws InvalidArugment If the index is out of bounds
	*
	* @result String containing specified element,
	*		  Empty string if error
	*/
	double getElementDouble(const uint32_t row, const uint32_t column);

private:
	std::vector<std::vector<std::string>> m_Table;
};

