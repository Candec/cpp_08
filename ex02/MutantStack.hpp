#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <vector>

template<class T>
class MutantStack : public std::stack<T>
{
	public:
	// Definition of the "iterator" type with a container to hold data
	typedef typename std::stack<T>::container_type::iterator iterator;

	MutantStack<T>();
	MutantStack<T>(const MutantStack &src);
	MutantStack<T>& operator=(const MutantStack &src);
	~MutantStack<T>();

	iterator begin();
	iterator end();

};

template<class T>
MutantStack<T>::MutantStack()
{
}

template<class T>
MutantStack<T>::MutantStack(const MutantStack &src)
{
	*this = src;
}

template<class T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack &src)
{
	if (this != &src)
		this->c = src.c;
	return (*this);
}

template<class T>
MutantStack<T>::~MutantStack()
{
}

template<class T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (this->c.begin());
}

template<class T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (this->c.end());
}

#endif
