#include <iostream>
#include <cctype>

int main(int argc, char **argv) {
	int i, j;
	std::string str;

	if (argc <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else {
		i = 1;
		while (i < argc) {
			str = argv[i];
			j = 0;
			while (str[j]) {
				std::cout << (char)toupper(str[j]);
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
}