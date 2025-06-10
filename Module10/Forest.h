#pragma once
#include "Tree.h"
#include <vector>

class Forest
{
public:
	virtual void growUp(const Tree& NewTree) {};
	const int getTreesNumber();
	void wind();
	void cutAll();
	~Forest();

protected:
	std::vector<Tree> Trees;
};


class LeafForest : public Forest {
public:
	void growUp(const Tree& tree) override;
};

class ConiferousForest : public Forest {
public:
	void growUp(const Tree& tree) override;
};