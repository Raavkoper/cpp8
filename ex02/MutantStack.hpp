#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H
#include <iostream>
 
class MutantStack {
private: 
 
public: 
	MutantStack(); 
	MutantStack( const MutantStack &other); 
	~MutantStack(); 
	MutantStack& operator=( const MutantStack &other); 
}; 
 
#endif
