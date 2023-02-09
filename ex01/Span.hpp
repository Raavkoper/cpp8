#ifndef SPAN_H
#define SPAN_H
#include <iostream>
 
class Span {
private: 
	unsigned int N;
 
public: 
	Span(); 
	Span( const Span &other); 
	Span(unsigned int newN);
	~Span(); 
	Span& operator=( const Span &other); 
}; 
 
#endif
