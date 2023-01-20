#include "pch.h"
#include "Circle.h"
IMPLEMENT_SERIAL(Circle, Ellipse1, 1)

void Circle::Draw(CDC * dc)
{
	dc->Ellipse(x1, y1, x2, y2);
}
