#include "Rectangle.h"

Rectangle::Rectangle()
{
	// This is the constructor it is called every time
}

Rectangle::~Rectangle()
{
	// This is the destructor
}

void Rectangle::setArea(float area)
{
	m_area = area;
}

float Rectangle::returnArea()
{
	return m_area;
}
