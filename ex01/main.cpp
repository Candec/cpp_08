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

	std::cout << "Short span: " << s.shortestSpan() << std::endl;
	std::cout << "Long span: " << s.longestSpan() << std::endl;
	s.printSpan();
	std::cout << std::endl;

	Span t(10);

	t.addNumber(5);
	t.addNumber(50);
	t.addNumber(-28);
	t.addNumber(-42);
	t.addNumber(-20);
	t.addNumber(22);
	t.addNumber(100);
	t.addNumber(0);
	t.addNumber(7);
	t.addNumber(90);

	std::cout << "Short span: " << t.shortestSpan() << std::endl;
	std::cout << "Long span: " << t.longestSpan() << std::endl;
	t.printSpan();
	std::cout << std::endl;

	Span u(20);
	// fillSpan could be left empty and it would assume the range is
	//[-size, size] of the span
	u.fillSpan(-100, 100);

	std::cout << "Short span: " << u.shortestSpan() << std::endl;
	std::cout << "Long span: " << u.longestSpan() << std::endl;
	u.printSpan();
	std::cout << std::endl;

	try {
		u.addNumber(42);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	return (0);
}