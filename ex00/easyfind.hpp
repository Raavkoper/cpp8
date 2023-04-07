#ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>
#include <array>
#include <vector>

template<typename T>
typename T::iterator easyfind(T container, int n) {
	typename T::iterator it;
	it = std::find(container.begin(), container.end(), n);
	if (it == container.end()) throw std::out_of_range("Number no excisto");
	return (it);
}

#endif