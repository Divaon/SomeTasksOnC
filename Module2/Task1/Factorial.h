#pragma once

#define INT_FACTORIAL

#define FLOAT_FACTORIAL


#ifdef FLOAT_FACTORIAL
float GetFactorialFloat(float n);
#else
	#ifndef INT_FACTORIAL
	int GetFactorialInt(int n);
	#endif
#endif

#ifdef INT_FACTORIAL
int GetFactorialInt(int n);
#endif
