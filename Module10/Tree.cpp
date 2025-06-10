#include "Tree.h"
#include <iostream>


int Maple::_count = 0;
int Oak::_count = 0;
int Chestnut::_count = 0;
int Coniferous::_count = 0;

const int Tree::getID()
{
	return _id;
};




const std::string Tree::getName()
{
	return _name;
};

const TreeType Tree::getTreeType() const
{
	return _treeType;
};

const int Tree::getCount()
{
	return -1;
}

void Tree::wind()
{
	std::cout << "Tree name = " << this->_name << " and id=" << this->_id << std::endl;
};

Oak::~Oak() {
	_count--;
}

const int Oak::getCount() 
{
	return _count;
};

Oak::Oak(const std::string& name)
{
	this->_name = name;
	this->_treeType = TreeType::Oak;
	this->_count += 1;
	this->_id = _count;

};

Oak::Oak(const Oak& OakTree)
{
	this->_name = OakTree._name;
	this->_treeType = TreeType::Oak;
	this->_id = OakTree._id;

};

void Oak::wind()
{
	std::cout << "Tree name = " << this->_name << " and id=" << this->_id << " and Tree type is Oak" << std::endl;
}

Maple::~Maple() {
	_count--;
}

const int Maple::getCount()
{
	return _count;
};

Maple::Maple(const std::string& name)
{
	this->_name = name;
	this->_treeType = TreeType::Maple;
	this->_count += 1;
	this->_id = _count;

};

Maple::Maple(const Maple& MapleTree)
{
	this->_name = MapleTree._name;
	this->_treeType = TreeType::Maple;
	this->_id = MapleTree._id;

};

void Maple::wind()
{
	std::cout << "Tree name = " << this->_name << " and id=" << this->_id << " and Tree type is Maple" << std::endl;
}

Chestnut::~Chestnut() {
	_count--;
}

const int Chestnut::getCount()
{
	return _count;
};

Chestnut::Chestnut(const std::string& name)
{
	this->_name = name;
	this->_treeType = TreeType::Chestnut;
	this->_count += 1;
	this->_id = _count;

};

Chestnut::Chestnut(const Chestnut& ChestnutTree)
{
	this->_name = ChestnutTree._name;
	this->_treeType = TreeType::Chestnut;
	this->_id = ChestnutTree._id;

};

void Chestnut::wind()
{
	std::cout << "Tree name = " << this->_name << " and id=" << this->_id << " and Tree type is Chestnut" << std::endl;
}

Coniferous::~Coniferous() {
	_count--;
}

const int Coniferous::getCount()
{
	return _count;
};

Coniferous::Coniferous(const std::string& name)
{
	this->_name = name;
	this->_treeType = TreeType::Chestnut;
	this->_count += 1;
	this->_id = _count;

};

Coniferous::Coniferous(const Coniferous& ConiferousTree)
{
	this->_name = ConiferousTree._name;
	this->_treeType = TreeType::Coniferous;
	this->_id = ConiferousTree._id;

};

void Coniferous::wind()
{
	std::cout << "Tree name = " << this->_name << " and id=" << this->_id << " and Tree type is Coniferous" << std::endl;
}