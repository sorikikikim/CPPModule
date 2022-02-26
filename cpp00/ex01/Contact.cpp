#include "Contact.hpp"

void Contact::update() {
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

void Contact::calcNames(std::string name) {
	if (name.length() > 10)
		std::cout << name.substr(0, 9) << ".";
	else
		std::cout << std::right << std::setw(10) << name;
}

void Contact::showNames(int num) {
	std::cout << std::right << std::setw(10) << num + 1; 
	std::cout << "|";
	calcNames(firstName);
	std::cout << "|";
	calcNames(lastName);
	std::cout << "|";
	calcNames(nickname);
}

void Contact::showContact() {
	std::cout << "first name : " << firstName << std::endl;
	std::cout << "last name : " << lastName << std::endl;
	std::cout << "nickname : " << nickname << std::endl;
	std::cout << "phone number : " << phoneNumber << std::endl;
	std::cout << "darkest secret : " << darkestSecret << std::endl;
}