#pragma once
#include "Tree.h"
#include <vector>

class Forest
{
public:
	virtual void growUp(Tree* NewTree) =0;
	const int getTreesNumber();
	void wind();
	void cutAll();
	~Forest();

protected:
	std::vector<Tree*> Trees;
};


class LeafForest : public Forest {
public:
	void growUp(Tree* NewTree) override;
};

class ConiferousForest : public Forest {
public:
	void growUp(Tree* NewTree) override;
};