#pragma once
#include <iostream>
#ifdef DLL_EXPORTS
#define DLL_API __declspec(dllexport)
#else
#define DLL_API __declspec(dllimport)
#endif
class Figure
{
protected:
	int sides_count;
	std::string name;
	
public:
	DLL_API Figure();

	DLL_API virtual void get_sides_count();
};

