#include "Figure.h"

DLL_API Figure::Figure() {
	sides_count = 0;
	name = "������";
}

DLL_API void Figure::get_sides_count() {
	std::cout << name << ": " << std::endl;
};