#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include <vector>
#include <numeric>
 
class Span {
private: 
	std::vector<int> vec;

public: 
	Span(); 
	Span( const Span &other); 
	Span(unsigned int N);
	~Span(); 
	Span& operator=( const Span &other);

	void addNumber(int num);
	int shortestSpan();
	int longestSpan();

	class ArrayAlreadyFull : public std::exception {
		const char *what() const throw();
	};
}; 
 
#endif
