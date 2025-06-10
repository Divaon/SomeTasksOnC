#include "Forest.h"
#include <iostream>


const int Forest::getTreesNumber()
{
	return Trees.size();
};

void Forest::cutAll()
{
	Trees.clear();
};


Forest::~Forest()
{
	cutAll();
};

void Forest::wind()
{
	for (auto tree = Trees.begin(); tree != Trees.end(); tree++) {
		(*tree)->wind();
	}

}

void LeafForest::growUp(Tree* NewTree)
{
	if (NewTree->getTreeType() != TreeType::Coniferous)
	{
		Trees.push_back(NewTree);
	}
	else
	{
		std::cout << "Error: LeafForest dont support coniferous tree:"  << std::endl;
	}
}

void ConiferousForest::growUp(Tree* NewTree)
{
	if (NewTree->getTreeType() == TreeType::Coniferous)
	{
		Trees.push_back(NewTree);
	}
	else
	{
		std::cout << "Error: ConiferousForest support only coniferous tree:" << std::endl;
	}
}
