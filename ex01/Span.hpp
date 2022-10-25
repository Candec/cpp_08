#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <list>

class span
{
	public:
	span();
	span(unsigned int size);
	span(const span &src);
	span& operator=(const span& src);
	~span();

	unsigned int getSize();
	void setSize();

	void addNumber(long long int n);
	unsigned long long int shortestSpan();
	unsigned long long int longestSpan();

	private:
	unsigned int size;
	std::list <long long int> lis;
};

#endif
