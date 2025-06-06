#pragma once
#include "Tree.h"
#include <vector>
#include <iostream>

class Forest
{
public:
	const int getTreesNumber();
	void growUp(const Tree& NewTree);
	void cutAll();
	Forest operator+(const Forest& other) const;


private:
	std::vector<Tree> Trees;
};
