#include <iostream>
#include "Forest.h"
#include "Tree.h"
#include <string>


int main()
{
	Maple t1("Maple Tree 1");
	Maple t2("Maple Tree 2");
	Oak t3("Oak Tree 1");
	Chestnut t4("Chestnut Tree 1");
	Coniferous t5("Coniferous Tree 1");

	LeafForest f1;
	ConiferousForest f2;

	f1.growUp(&t1);
	f1.growUp(&t2);
	f1.growUp(&t3);
	f1.growUp(&t4);
	f1.growUp(&t5);

	f2.growUp(&t1);
	f2.growUp(&t2);
	f2.growUp(&t3);
	f2.growUp(&t4);
	f2.growUp(&t5);

	f1.wind();
	f2.wind();

	std::cout << "Maple tree count = " << t1.getCount() << std::endl;
	std::cout << "Oak tree count = " << t3.getCount() << std::endl;
	std::cout << "Chestnut tree count = " << t4.getCount() << std::endl;
	std::cout << "Coniferous tree count = " << t5.getCount() << std::endl;

}
