#ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>
#include <array>
#include <vector>

template<typename T>
typename T::iterator easyfind(T container, int n) {
	typename T::iterator it;
	for (it = container.begin(); it != container.end(); it++) {
		if (*it == n)
			return (it);
	}
	throw std::out_of_range("Number no excisto");
}

#endif