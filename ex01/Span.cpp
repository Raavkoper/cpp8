#include "Span.hpp"

Span::Span()
	: N(0)
{

}
 
Span::Span( const Span& other) {

	*this = other;
}
 
Span::Span(unsigned int newN) 
	: N(newN)
{

}

Span::~Span() {

}

Span&	Span::operator=( const Span& other ) {
	return *this;
}
