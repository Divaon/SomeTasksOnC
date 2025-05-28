#include <iostream>
#include "CreateAndDeleteArray.h"

void CreateAndDeleteArray()
{
    int** m = new int* [3]; 
    for (int i = 0; i < 3; i++) {
        m[i] = new int[3];   
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            m[i][j] = i*j;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << m[i][j] << ' ';
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < 3; i++) {
        delete[] m[i]; 
    }
    delete[] m; 
};