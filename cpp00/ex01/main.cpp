#include "phonebook.hpp"

void displayList(PhoneBook contacts[8]){
	std::cout << std::right << std::setw(10) << "index";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "first name";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "last name";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "nickname";
	std::cout << std::endl;

	for (int i = 0; i < 8; i++)
		contacts[i].displayAll(i);
}

void printContact(PhoneBook contacts[8]){
	
} 

int main() {
	std::string command;
	PhoneBook contacts[8];
	int num = 0;

	while (std::getline(std::cin, command)) {
		if (!command.compare("EXIT")) {
			exit(0);
		}
		else if (!command.compare("ADD")) {
			num %= 8;
			contacts[num].addContact(num);
			num++;
		}
		else if (!command.compare("SEARCH")) {
			displayList(contacts);
			printContact(contacts);
		}
		else {
			command = "";
		}
	}
}