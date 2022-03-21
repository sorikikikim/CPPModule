#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	//protected 로 type변수 가지고,
	// 상속하면 Cat, Dog가 _type 변수 사용
	protected:
		std::string _type;

	public:
		Animal();
		Animal( Animal const & animal );
		//부모클래스 소멸자는 꼭 virtual 이야!
		virtual ~Animal();
		Animal& operator=( const Animal& animal );

		//getter는 return 값을 레퍼런스로 하면 안돼고 값으로
		// 하면 돼.
		//const std::string& getType();
		std::string getType() const;
		void setType(const std::string& type);

		//상속받을 거니까 virtual 로 한거야
		//animal클래스도 makeSound를 호출할 수 있어야하니까
		//순수 가상함수 (virtual void makeSound()=0;)
		//로 하면 안돼고 구현내용이 있어야해.
		virtual void makeSound() const;

};


#endif /* ********************************************************** ANIMAL_H */