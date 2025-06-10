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
	for (int i = 0; i < Trees.size(); i++)
	{
		Trees[i].wind();
	}
}

void LeafForest::growUp(const Tree& NewTree)
{
	if (NewTree.getTreeType() != TreeType::Coniferous)
	{
		Trees.push_back(NewTree);
	}
	else
	{
		std::cout << "Error: LeafForest dont support coniferous tree:"  << std::endl;
	}
}

void ConiferousForest::growUp(const Tree& NewTree)
{
	if (NewTree.getTreeType() == TreeType::Coniferous)
	{
		Trees.push_back(NewTree);
	}
	else
	{
		std::cout << "Error: ConiferousForest support only coniferous tree:" << std::endl;
	}
}
