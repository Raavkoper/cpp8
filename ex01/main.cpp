#include "Span.hpp"

int main() {
	{
		Span sp = Span(5);
		Span rando(10000);

		try {
			std::cout << sp.shortestSpan() << std::endl;
		} catch(const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		try {
			sp.addNumber(10);
		} catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		rando.fillingVector(10000);
		
		std::cout << rando.shortestSpan() << std::endl;
		std::cout << rando.longestSpan() << std::endl;
	}
}