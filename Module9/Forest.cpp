#include "Forest.h"
#include <iostream>


const int Forest::getTreesNumber()
{
	return Trees.size();
};
void Forest::growUp(const Tree& NewTree)
{
	Trees.push_back(NewTree);
};
void Forest::cutAll()
{
	Trees.clear();
};
Forest Forest::operator+(const Forest& other) const
{
	Forest result;
	result.Trees.reserve(this->Trees.size() + other.Trees.size());
	result.Trees.insert(result.Trees.end(), this->Trees.begin(), this->Trees.end());
	result.Trees.insert(result.Trees.end(), other.Trees.begin(), other.Trees.end());
	return result;
};

