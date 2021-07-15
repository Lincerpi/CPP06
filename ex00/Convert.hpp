#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <string>
#include <iostream>
#include <cmath>

class Convert
{
		std::string value;
		Convert();

	public:
		~Convert();
		Convert(std::string value);
		Convert(const Convert& copy);
		Convert& operator=(const Convert& op);
		std::string getValue() const;
		int toInt();
		char toChar();
		float toFloat();
		double toDouble();
		void convert();
};

#endif