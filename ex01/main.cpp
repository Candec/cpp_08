#include "Span.hpp"

int main()
{
	Span s(10);

	s.addNumber(0);
	s.addNumber(1);
	s.addNumber(2);
	s.addNumber(3);
	s.addNumber(4);
	s.addNumber(5);
	s.addNumber(6);
	s.addNumber(7);
	s.addNumber(8);
	s.addNumber(9);

	std::cout << s.shortestSpan() << std::endl;
	std::cout << s.longestSpan() << std::endl;
}