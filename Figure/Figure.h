#pragma once
#ifdef FIGURELIBRARYDYNAMIC_EXPORTS
#define FIGURE_API __declspec(dllexport)
#else
#define FIGURE_API __declspec(dllimport)
#endif

#include <iostream>

class Figure {
protected:
    std::string name;
public:
    FIGURE_API void F_print(std::string name);
};