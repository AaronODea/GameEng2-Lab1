#include <iostream>
#include "Graphic.h"

Graphic::Graphic()
{
}

Graphic::~Graphic()
{
	std::cout << "hit ";
}

void Graphic::Draw()
{
	std::cout << "Drawing Graphic Object" << std::endl;
}
