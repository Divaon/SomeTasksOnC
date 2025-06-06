// IT-AcademyModule9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
—оздать 2 класса: Forest, Tree
 ласс Forest содержит в себе набор объектов типа Tree

 ласс Tree:
- в конструкторе класса передаетс€ им€ дерева и тип дерева (тип дерева - это enum из нескольких пород деревьев)
- реализован конструктор копировани€
- в классе имеетс€ счетчик, который хранит сколько всего деревьев было создано
- каждому созданному дереву в конструкторе устанавливаетс€ уникальный id - как вариант текущее количество деревьев + 1
- в классе реализован метод wind() - который выводит на экран им€ дерева и его id
- константные геттеры getID и getName

 ласс Forest:
- хранит в себе список (массив, вектор, лист...) объектов типа дерева
- реализованы функции
	- getTreesNumber() - получение количества деревьев в лесу
	- growUp(...) - (вырастить дерево) добавление дерева в список
	- cutAll() - (вырубить все деревь€) ќчистка списка деревьев
	- operator+ - (два леса срослись в один большой) - нужно соединить все деревь€ обоих лесов и вернуть новый лес

main:
должно быть продемонстрировано создание деревьев и добавление их в леса, а также сли€ние лесов и их вырубку
*/

#include <iostream>
#include "Forest.h"
#include "Tree.h"
#include <string>


int main()
{
    std::cout << "Hello World!\n";
	Tree t1("Tree1", TreeType::Oak);
	Tree t2("Tree2", TreeType(1));
	Tree t3(t2);
	Tree t4("Tree4", TreeType(2));

	t1.wind();
	t2.wind();
	t3.wind();

	Forest f1;
	std::cout << f1.getTreesNumber() << std::endl;
	f1.growUp(t1);
	f1.growUp(t2);
	std::cout << f1.getTreesNumber() << std::endl;
	Forest f2;
	f2.growUp(t3);
	f2.growUp(t4);
	Forest f3 = f1+f2;
	std::cout << f3.getTreesNumber() << std::endl;
	f3.cutAll();
	std::cout << f3.getTreesNumber() << std::endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
