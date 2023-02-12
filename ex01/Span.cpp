#include "Span.hpp"

Span::Span()
	: span(0)
{}
 
Span::Span( const Span& other) {
	*this = other;
}
 
Span::Span(unsigned int N) {
	span.reserve(N);
}

Span::~Span() {}

Span&	Span::operator=( const Span& other ) {
	return *this;
}
