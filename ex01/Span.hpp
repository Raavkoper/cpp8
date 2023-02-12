#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include <vector>
 
class Span {
private: 
	std::vector<int> span;

public: 
	Span(); 
	Span( const Span &other); 
	Span(unsigned int N);
	~Span(); 
	Span& operator=( const Span &other); 
}; 
 
#endif
