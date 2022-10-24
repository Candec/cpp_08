#include "easyfind.hpp"

template <class T>
void easyfind(const T& haystack, int needle)
{
	class T::const_iterator index = std::find(haystack.begin(), haystack.end(), needle);

	std::string			str;
	std::stringstream 	stream;

	if (index != haystack.end())
		stream << needle << std::string(" is on index ") << *index << std::endl;
	else
		stream << needle << std::string(" was not found") << std::endl;

	std::cout << stream.str();
}
