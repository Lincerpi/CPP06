#include "Convert.hpp"

Convert::~Convert()
{}

Convert::Convert(std::string value):
value(value)
{}

Convert::Convert(const Convert& copy):
value(copy.value)
{}

Convert& Convert::operator=(const Convert& op)
{
	if (this == & op)
		return (*this);
	value = op.value;
	return (*this);
}

std::string Convert::getValue() const
{	return (value); };

int Convert::toInt()
{
	return (static_cast<int>(toFloat()));
}

char Convert::toChar()
{
	char charValue = static_cast<char>(toFloat());

	return (charValue);
}

float Convert::toFloat()
{
	float valueFloat = atof(value.c_str());
	return (valueFloat);  
	
}

double Convert::toDouble()
{
	return (static_cast<double>(toFloat()));
}

void Convert::convert()
{
	if (toFloat() < CHAR_MIN || toFloat() > CHAR_MAX || isnan(toFloat()))
		std::cout << "Char: impossible" << std::endl;
	else if (isprint(toChar()))	
		std::cout << "Char: " << toChar() << std::endl;
	else
		std::cout << "Char: not displayed" << std::endl;

	if (toFloat() < INT_MIN || toFloat() > INT_MAX || isnan(toFloat()))
		std::cout << "Int: impossible" << std::endl;
	else
		std::cout << "Int: " << toInt() << std::endl;
		
	if (toFloat() - toInt() == 0)
	{
		std::cout << "Float: " << toFloat() << ".0" << "f" << std::endl;
		std::cout << "Double: " << toDouble() << ".0"<< std::endl;
	}
	else
	{
		std::cout << "Float: " << toFloat() << "f" << std::endl;
		std::cout << "Double: " << toDouble() << std::endl;
	}
}