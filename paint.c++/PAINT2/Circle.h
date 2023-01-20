#pragma once 
#include "Ellipse1.h"

class Circle : public Ellipse1
{
DECLARE_SERIAL(Circle)
public:
	Circle() {};
	Circle(int x_1, int y_1, int x_2, int y_2) : Ellipse1(x_1, y_1, x_2, y_2) {};
	void Draw(CDC* dc);

};

