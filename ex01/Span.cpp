#include "Span.hpp"

Span::Span()
	: vec(0)
{}
 
Span::Span( const Span& other) {
	*this = other;
}
 
Span::Span(unsigned int N) {
	vec.reserve(N);
}

Span::~Span() {}

Span&	Span::operator=( const Span& other ) {
	return *this;
}

const char *Span::ArrayAlreadyFull::what() const throw() {
	return ("Array already full");
}

void Span::addNumber(int num) {
	if (vec.size() == vec.capacity())
		throw ArrayAlreadyFull();
	vec.push_back(num);
}

int Span::shortestSpan() {
	if (vec.size() < 2 || vec.capacity() < 2)
		throw ArrayAlreadyFull();
	std::vector<int> tmp = vec;
	std::sort(tmp.begin(), tmp.end());
	std::adjacent_difference(tmp.begin(), tmp.end(), tmp.begin());
	for (int item : vec) {
		std::cout << item << std::endl;
	}
	std::cout << *std::min_element(tmp.begin() + 1, tmp.end()) << std::endl;
	return (0);
}