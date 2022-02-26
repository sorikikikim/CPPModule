#include "Phonebook.hpp"


void Phonebook::addContact(int num) {
	contact[num].update();
}

void Phonebook::displayColumns() {
	std::cout << std::right << std::setw(10) << "index";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "first name";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "last name";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "nickname" << std::endl;
}

void Phonebook::displayContacts() {
	displayColumns();
	for (int i = 0; i < 8; i++) {
		contact[i].showNames(i);
		std::cout << std::endl;
	}
}

void Phonebook::searchContact() {
	std::cin >> searchNum;
	contact[searchNum - 1].showContact();

}