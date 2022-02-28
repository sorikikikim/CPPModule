#include "Phonebook.hpp"

int main() {
	std::string command;
	Phonebook phonebook;

	while (1) {
		std::cout << "Enter the command among 'EXIT, ADD, SEARCH' >> ";
		std::getline(std::cin, command);

		if (!command.compare("EXIT"))
			exit(0);
		else if (!command.compare("ADD"))
			phonebook.addContact();
		else if (!command.compare("SEARCH")) {
			phonebook.displayContacts();
			std::cout << "Enter the index of the contact number you want to view. >> ";
			phonebook.searchContact();
			std::cin.ignore();
		}
		else {
			continue;
		}
	} 
}