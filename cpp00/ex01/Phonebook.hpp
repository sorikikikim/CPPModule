#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"


class Phonebook {
	private: 
		Contact contact[8];
		int _addNum;
		void displayColumns();

	public:
		Phonebook();
		void addContact();
		void displayContacts();
		void searchContact();
};

#endif