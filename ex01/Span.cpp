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

const char *Span::NoNumbersStored::what() const throw() {
	return ("Not enough numbers stored in array");
}

void Span::addNumber(int num) {
	if (vec.size() == vec.capacity())
		throw ArrayAlreadyFull();
	vec.push_back(num);
}

int Span::shortestSpan() {
	if (vec.size() < 2 || vec.capacity() < 2)
		throw NoNumbersStored();
	std::vector<int> tmp = vec;
	std::sort(tmp.begin(), tmp.end());
	std::adjacent_difference(tmp.begin(), tmp.end(), tmp.begin());
	return (*std::min_element(tmp.begin() + 1, tmp.end()));
}

int Span::longestSpan() {
	if (vec.size() < 2 || vec.capacity() < 2)
		throw NoNumbersStored();
	int min = *std::min_element(vec.begin(), vec.end());
	int max = *std::max_element(vec.begin(), vec.end());
	return (max - min);
}

void Span::fillingVector(int N) {
	for (int i = 0; i < N; i++)
		this->addNumber(rand() % (N * 3));
}