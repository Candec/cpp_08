#include "Span.hpp"

Span::Span() : size(0)
{
}

Span::Span(unsigned int _size) : size(_size)
{
}

Span::Span(const Span &src)
{
	*this = src;
}

Span& Span::operator=(const Span& src)
{
	if(this != &src)
	{
		this->size = src.size;
		this->v = src.v;
	}
	return (*this);
}

Span::~Span()
{
}

unsigned int Span::getSize() const
{
	return(size);
}

const std::vector<int> &Span::getVector() const
{
	return(v);
}

/*
// This function adds the numbers sorted from smaller to
// bigger as the order is not relevant for the exercise
// but helps when comparing the values
*/
void Span::addNumber(int n)
{
	if (v.size() + 1 > this->size)
		throw std::length_error("Span class is already full");

	std::vector<int>::iterator i = std::upper_bound(v.begin(), v.end(), n);

	if (i != v.end())
		v.insert(i, n);
	else
		v.push_back(n);
}

unsigned int Span::shortestSpan()
{
	if (v.size() < 2)
		throw std::length_error("No Span to measure");

	unsigned int shortSpan = INT_MAX;
	unsigned int diff;
	for (size_t i = 1; i < v.size(); i++)
	{
		diff = v[i] - v[i - 1];
		if (diff < shortSpan)
			shortSpan = diff;
	}
	return (shortSpan);
}

unsigned int Span::longestSpan()
{
	if (v.size() < 2)
		throw std::length_error("No Span to measure");

	return (v.back() - v[0]);
}

void Span::fillSpan()
{
	srand((unsigned)time(0));
	size_t i = 0;

	int low = -size;
	int high = size;
	int range = (high - low);

	while (i++ < this->size)
	{
		int number = low + int(rand() % range);
		addNumber(number);
	}
}

void Span::fillSpan(int a, int b)
{
	srand((unsigned)time(0));
	size_t i = 0;

	if (a > b)
		std::swap(a, b);

	int low = a;
	int high = b;
	int range = (high - low);

	while (i++ < this->size)
	{
		int number = low + int(rand() % range);
		addNumber(number);
	}
}

void Span::printSpan()
{
	size_t i = 0;

	std::cout << "Span { ";
	while (i < this->size)
	{
		std::cout << v[i] << ", ";
		i++;
	}
	std::cout << "\b\b }" << std::endl;
}