#include "Phonebook.hpp"

Phonebook::Phonebook()
:addNum(0)
{
}

void Phonebook::addContact() {
	contact[addNum % 8].update();
	addNum++;
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
	int searchIndex; 

	std::cin >> searchIndex;
	searchIndex -= 1;
	if (searchIndex >= 0 && (searchIndex < 8 && searchIndex < addNum))
		contact[searchIndex].showContact();
	else
		std::cout << "Enter only valid index" << std::endl;
}