#pragma once
#include <string>

enum class TreeType {
	Maple,
	Oak,
	Chestnut
};

class Tree
{
public:

	Tree(const std::string& name, TreeType treeType);
	Tree(const Tree& tree);
	void wind();
	const int getID();
	const std::string getName();
private:
	static int _count; 
	std::string _name;
	int _id;
	TreeType _treeType;
};