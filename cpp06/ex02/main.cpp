#include "identify.hpp"

Base *generate(void) {
	Base *ptr;
	int random;

	srand(time(NULL));
	random = rand() % 3;
	switch (random) {
	    case 0:
	    	ptr = new A;
	    	break;
	    case 1:
	    	ptr = new B;
	    	break;	
	    default:
	    	ptr = new C;
	    	break;
	}
	return ptr;
}

void identify(Base *p) {
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base &p) {
	try {
		A obj;
		obj = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e) {
        std::cout << e.what() << std::endl;
	}
	try {
		B obj;
		obj = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch(const std::exception& e) {
        std::cout << e.what() << std::endl;
	}
	try {
		C obj;
		obj = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e) {
        std::cout << e.what() << std::endl;
	}
}

int main () {
	Base *ptr = NULL;
    
	ptr = generate();
	std::cout << "------pointer------" << std::endl;
	identify(ptr);
	std::cout << "------reference------" << std::endl;
	identify(*ptr);
	if (ptr)
		delete ptr;
}