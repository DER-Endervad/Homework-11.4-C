#pragma once
#include <iostream>
#include "Figure.h"
#ifdef DLL_EXPORTS
#define DLL_API __declspec(dllexport)
#include "Triangle.h"
#include "Right_triangle.h"
#include "Isosceles_triangle.h"
#include "Equilateral_triangle.h"
#include "Quadrangle.h"
#include "Rectangle_Q.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"
#else
#define DLL_API __declspec(dllimport)
#endif

class LybMain
{
public:
	DLL_API void Triangle2(int l_a, int l_b, int l_c, int l_d, int a_a, int a_b);
    DLL_API void Right_triangle2(int l_a, int l_b, int l_c, int l_d, int a_a);
    DLL_API void Isosceles_triangle2(int l_a, int l_b, int l_c, int l_d);
    DLL_API void Equilateral_triangle2(int l_a);
    DLL_API void Quadrangle2(int l_a, int l_b, int l_c, int l_d, int a_a, int a_b, int a_c, int a_d);
    DLL_API void Rectangle_Q2(int l_a, int l_b);
    DLL_API void Square2(int l_a);
    DLL_API void Parallelogram2(int l_a, int l_b, int l_c, int l_d);
    DLL_API void Rhombus2(int l_a, int l_b, int l_c);
};
void print_info(Figure* figure);

