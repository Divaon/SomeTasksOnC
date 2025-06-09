#include "Tree.h"
#include <iostream>

int Tree::_count=0;


Tree::Tree(const std::string& name, TreeType treetype)
{
	this->_name = name;
	this->_treeType = treetype;
	this->_count += 1;
	this->_id = _count;

};


Tree::Tree(const Tree& tree)
{
	this->_name = tree._name;
	this->_treeType = tree._treeType;
	this->_id = tree._id;

};



const int Tree::getID()
{
	return _id;
};

const std::string Tree::getName()
{
	return _name;
};

void Tree::wind()
{
	std::cout << "Tree name = " << this->_name << " and id=" << this->_id << std::endl;
};