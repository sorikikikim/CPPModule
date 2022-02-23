#include <string>

class Contact{
	public:
		void update(){
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
		void display(){
			//first, last 다 보여주는거
		}

	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
}