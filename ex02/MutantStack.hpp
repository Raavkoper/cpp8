#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <stack>
#include <iostream>

template<typename T>
class MutantStack : public std::stack<T> {
public:
	typedef T* iterator;

	MutantStack() {}
	MutantStack( const MutantStack &other) { *this = other; }
	~MutantStack() {}
	MutantStack& operator=( const MutantStack &other) { return *this; }

	class NotEnoughElements : public std::exception {
		const char *what() const throw() { return "Not enough elements in array"; };
	};

	iterator end() { 
		int size = this->size();
		if (size <= 0) throw NotEnoughElements();
		return &this->top(); 
	}

	iterator begin() {
		int size = this->size();
		if (size <= 0) throw NotEnoughElements();
		iterator first_element = this->end();
		for (int i = 0; i < size - 1; i++)
			first_element--;
		return (first_element);
	}
}; 
 
#endif
