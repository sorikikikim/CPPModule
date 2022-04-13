#include "conversion.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cerr << "Error : Wrong argument" << std::endl;
		std::cerr << "argumnet : './convert' 'input'" << std::endl;

		return 1;
	}
	else {
		std::string input;
		std::stringstream ss; //pick somethings that match with data type
		double value;
		float value_f;
		char *stop = NULL;

		input = argv[1];
		if (input.length() == 1 && !std::isdigit(input[0]))
			value = static_cast<double>(input[0]); //process of char
		else
			value = strtod(input.c_str(), &stop); //str to num
		
		//to char
		if (std::isnan(value) || std::isinf(value) || value < 0 || value > 127)
			std::cout << "char: impossible" << std::endl;
		else if (value > 31 && value < 127)
			std::cout << "char: \'" << static_cast<char>(value) << "\'" << std::endl;
		else //control character
			std::cout << "char: Non displayable" << std::endl;
		
		//to int
		if (std::isnan(value) || std::isinf(value) 
		|| value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max())
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(value) << std::endl;

		//to float
		value_f = static_cast<float>(value);
		ss << "float: " << value_f;
		input = ss.str();		
		if (!std::isnan(value_f) && !std::isinf(value_f) && (input.find('.') == std::string::npos))
			ss << ".0";
		ss << "f\n";
		std::cout << ss.str();
		ss.str(std::string());
		ss.clear();

		//to double
		value = static_cast<double>(value);
		ss << "double: " << value;
		input = ss.str();
		if (!std::isnan(value_f) && !std::isinf(value_f) && (input.find('.') == std::string::npos))
			ss << ".0";
		std::cout << ss.str() << std::endl;

		return 0;
	}
}