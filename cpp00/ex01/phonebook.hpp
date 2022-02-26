#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"


class Phonebook {
	private: 
		Contact contact[8];
		int searchNum;
		void displayColumns();

	public:
		void addContact(int num);
		void displayContacts();
		void searchContact();
};

#endif