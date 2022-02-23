#include "phonebook.hpp"

void PhoneBook::addContact() {
	std::cout << "First name : ";
	std::getline(std::cin, firstName);
	std::cout << "Last name : ";
	std::getline(std::cin, lastName);
	std::cout << "Nickname : ";
	std::getline(std::cin, nickname);
	std::cout << "Phone number : ";
	std::getline(std::cin, phoneNumber);
	std::cout << "Darkest secret : ";
	std::getline(std::cin, darkestSecret);
}

void PhoneBook::displayAll(int num) {
	std::cout << std::right << std::setw(10) << "index";
	std::cout << "|";
}