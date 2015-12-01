#include <iostream>

class Point
{
public:
	Point(float x = 0, float y = 0);
	void setPoint(float, float);
	float getX() const {return x;}
	float getY() const {return y;}

	friend _OSTREAM_ & operator << (_OSTREAM_ &, const Point &);

protected:
	float x, y;
}


