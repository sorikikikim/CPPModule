#include "easyfind.hpp"

int main() {
	std::vector<int> vec;

	for (int i = 0; i < 10; i++) {
		vec.push_back(i);
	}

	std::vector<int>::iterator iter = begin(vec);

	while (iter != end(vec)) 
		std::cout << *iter++ << " "; 
	std::cout << std::endl;

	try {
		std::cout << "Easy Find " << *easyfind(vec, 4) << " Successed" << std::endl;
		std::cout << "Easy Find " << *easyfind(vec, 8) << " Successed" << std::endl;
		std::cout << "Easy Find " << *easyfind(vec, 12) << " Successed" <<std::endl;

	} 
    catch (std::exception & e) {
		std::cout <<  e.what() << std::endl;
	}
	
	return 0;
}