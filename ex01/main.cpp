#include "Span.hpp"

int main() {
	Span spannie(19);

	spannie.addNumber(5);
	spannie.addNumber(8);
	spannie.addNumber(44);
	spannie.addNumber(25);
	spannie.addNumber(7);
	spannie.addNumber(755);
	spannie.addNumber(457);
	try {
		spannie.addNumber(5);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << spannie.shortestSpan() << std::endl;
}