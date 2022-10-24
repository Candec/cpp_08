#include "easyfind.hpp"

template <class T>
void easyfind(const T& haystack, int needle)
{
	class T::needle first = haystack.begin();
	class T::needle last = haystack.end();

	class T::needle index = std::find(first, last, needle);

	std::string			str;
	std::stringstream 	stream;

	if (index != last)
		stream << needle << " is on index " << index << std::endl;
	else
		stream << needle << " is was not found" << std::endl;

	std::cout << stream.str();
}
