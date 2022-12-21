#include <iostream>
#include "LybMain.h"
#include <Windows.h>
#include <fstream>

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    LybMain L;

    L.Triangle2(10, 20, 30, 50, 60, 70);
    L.Right_triangle2(10, 20, 30, 40, 50);
    L.Isosceles_triangle2(10, 20, 50, 80);
    L.Equilateral_triangle2(30);
    L.Quadrangle2(10, 20, 30, 40, 50, 60, 70, 80);
    L.Rectangle_Q2(10, 20);
    L.Square2(20);
    L.Parallelogram2(20, 30, 30, 40);
    L.Rhombus2(30, 30, 40);
}

