#include "phonebook.hpp"

void displayList(PhoneBook *contacts){
	std::cout << std::right << std::setw(10) << "index";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "first name";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "last name";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "nickname";
	std::cout << std::endl;

	for (int i = 0; i < 8; i++)
		contacts[i].displayAll();
}

void printContact(PhoneBook *contacts){
	
} 

int main() {
	std::string command;
	PhoneBook phoneBook;
	int num = 0;

	while (std::getline(std::cin, command)) {
		if (!command.compare("EXIT")) {
			exit(0);
		}
		else if (!command.compare("ADD")) {
			num %= 8;
			phoneBook.add(num);
			num++;
		}
		else if (!command.compare("SEARCH")) {
			displayList(contacts);
			printContact(contacts);
		}
		else {
		}
	}
}