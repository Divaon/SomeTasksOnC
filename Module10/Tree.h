#pragma once
#include <string>


enum class TreeType {
	Maple,
	Oak,
	Chestnut,
	Coniferous
};

class Tree
{
public:
	virtual void wind();
	const int getID();
	const std::string getName();
	virtual const int getCount() ;
	const TreeType getTreeType() const;
protected:
	std::string _name;
	int _id;
	TreeType _treeType;
};

class Oak : public Tree {
public:
	const int getCount() override;
	Oak(const std::string& name);
	Oak(const Oak& other);
	void wind() override;
	~Oak();
private:
	static int _count;
};


class Maple : public Tree {
public:
	const int getCount() override;
	Maple(const std::string& name);
	Maple(const Maple& other);
	void wind() override;
	~Maple();
private:
	static int _count;
};


class Chestnut : public Tree {
public:
	const int getCount() override;
	Chestnut(const std::string& name);
	Chestnut(const Chestnut& other);
	void wind() override;
	~Chestnut();
private:
	static int _count;
};


class Coniferous : public Tree {
public:
	const int getCount() override;
	Coniferous(const std::string& name);
	Coniferous(const Coniferous& other);
	void wind() override;
	~Coniferous();
private:
	static int _count;
};
