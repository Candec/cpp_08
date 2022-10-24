#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>

template<class T>
void fillContainer(T& container, size_t size)
{
	size_t i = 0;

	while (i++ < size)
		container.push_back(i);
}

int main(void)
{
	std::vector<int> vec;
	fillContainer(vec, 100);

	std::deque<int> deck;
	fillContainer(deck, 200);

	std::list<int> lis;
	fillContainer(lis, 1000);

	easyfind(vec, 80);
	easyfind(deck, 180);
	easyfind(lis, 800);
	easyfind(vec, 800);
	return (0);
}
