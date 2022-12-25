#pragma once
#include "Figure.h"

class Quadrangle :public Figure
{
protected:
	int length_a;
	int length_b;
	int length_c;
	int length_d;
	int angel_a;
	int angel_b;
	int angel_c;
	int angel_d;

public:
	DLL_API Quadrangle(int l_a, int l_b, int l_c, int l_d, int a_a, int a_b, int a_c, int a_d);

	DLL_API Quadrangle(int l_a, int l_b, int l_c, int l_d, int a_a, int a_b, int a_c, int a_d, std::string name);

	DLL_API void get_sides_count() override;
};

