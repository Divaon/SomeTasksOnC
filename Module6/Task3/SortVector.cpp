#include "SortVector.h"
#include <vector>

void SortVector(std::vector<int> &vec)
{
	int VectorLen = vec.size() - 1;
	for (int i = 0; i < VectorLen; i++)
	{
		for (int j = 0; j < VectorLen - i; j++)
		{
			if (vec[j] > vec[j + 1])
			{
				int temp = vec[j];
				vec[j] = vec[j + 1];
				vec[j + 1] = temp;
			}
		};
	};
};