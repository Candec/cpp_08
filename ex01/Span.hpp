#ifndef SPAN_HPP
# define SPAN_HPP

# include <climits>
# include <algorithm>
# include <vector>
# include <stdexcept>
# include <iostream>
# include <stdlib.h>

class Span
{
	public:
	Span();
	Span(unsigned int size);
	Span(const Span &src);
	Span& operator=(const Span& src);
	~Span();

	unsigned int getSize() const;
	const std::vector<int>& getVector() const;

	void addNumber(int n);
	unsigned int shortestSpan();
	unsigned int longestSpan();

//	extra utility
	void fillSpan();
	void fillSpan(int a, int b);
	void printSpan();

	private:
	unsigned int size;
	std::vector <int> v;
};

#endif
