#include "serialization.hpp"

uintptr_t serialize(Data *ptr)
{
	uintptr_t uintptr;

	uintptr = reinterpret_cast<uintptr_t>(ptr);
	return uintptr;
}
Data *deserialize(uintptr_t raw)
{
	Data *ptr;
	ptr = reinterpret_cast<Data *>(raw);
	return (ptr);
}

int main ()
{
	Data* value = new Data();
	Data* value2;

    value->name = "sorkim";
	value->age = 42;

	std::cout << "Before serialize data " << std::endl;
	std::cout << "Data : " << value << std::endl;
	std::cout << "Name : " << value->name << std::endl;
	std::cout << "Age : " << value->age << std::endl;
	std::cout << std::endl;

    uintptr_t serialized_value = serialize(value);
    std::cout << "After serialize data : " << serialized_value << std::endl;
    std::cout << std::endl;

	value2 = deserialize(serialized_value);
	std::cout << "After Deserialize data " << std::endl;
	std::cout << "Data : " << value2 << std::endl;
	std::cout << "Name : " << value2->name << std::endl;
	std::cout << "Age : " << value2->age << std::endl;

	delete value;
	return 0;
}
