#pragma once
#include "Figure.h"
#include <iostream>

class Triangle:public Figure
{
protected:
	int length_a;
	int length_b;
	int length_c;
	int angel_a;
	int angel_b;
	int angel_c;

public:
	DLL_API Triangle(int l_a, int l_b, int l_c, int a_a, int a_b, int a_c);

	DLL_API Triangle(int l_a, int l_b, int l_c, int a_a, int a_b, int a_c, std::string name);

	DLL_API void get_sides_count() override;
};

