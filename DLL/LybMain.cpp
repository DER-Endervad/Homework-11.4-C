#include "LybMain.h"

DLL_API void LybMain::Triangle2(int l_a, int l_b, int l_c, int l_d, int a_a, int a_b) {
    Figure* t = new Triangle(10, 20, 30, 50, 60, 70);
    print_info(t); std::cout << std::endl; delete t;
}
DLL_API void LybMain::Right_triangle2(int l_a, int l_b, int l_c, int l_d, int a_a) {
    Figure* rt = new Right_triangle(10, 20, 30, 40, 50);
    print_info(rt); std::cout << std::endl; delete rt;
}
DLL_API void LybMain::Isosceles_triangle2(int l_a, int l_b, int l_c, int l_d) {
    Figure* it = new Isosceles_triangle(10, 20, 50, 80);
    print_info(it); std::cout << std::endl; delete it;
}
DLL_API void LybMain::Equilateral_triangle2(int l_a) {
    Figure* et = new Equilateral_triangle(30);
    print_info(et); std::cout << std::endl; delete et;
}
DLL_API void LybMain::Quadrangle2(int l_a, int l_b, int l_c, int l_d, int a_a, int a_b, int a_c, int a_d) {
    Figure* q = new Quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
    print_info(q); std::cout << std::endl; delete q;
}
DLL_API void LybMain::Rectangle_Q2(int l_a, int l_b) {
    Figure* r = new Rectangle_Q(10, 20);
    print_info(r); std::cout << std::endl; delete r;
}
DLL_API void LybMain::Square2(int l_a) {
    Figure* s = new Square(20);
    print_info(s); std::cout << std::endl; delete s;
}
DLL_API void LybMain::Parallelogram2(int l_a, int l_b, int l_c, int l_d) {
    Figure* p = new Parallelogram(20, 30, 30, 40);
    print_info(p); std::cout << std::endl; delete p;
}
DLL_API void LybMain::Rhombus2(int l_a, int l_b, int l_c) {
    Quadrangle* rh = new Rhombus(30, 30, 40);
    print_info(rh); std::cout << std::endl; delete rh;
}

void print_info(Figure* figure)
{
    figure->get_sides_count();
}