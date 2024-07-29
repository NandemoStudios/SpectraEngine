#include <string>
#include <list>

using namespace std;

class Rect {
public:
	int PosX;
	int PosY;
	int Width;
	int Height;

	Rect(int posx, int posy, int width, int height) {
		PosX = posx;
		PosY = posy;
		Width = width;
		Height = height;
	}
};

class Circle {
public:
	int PosX;
	int PosY;
	int Radius;

	Circle(int posx, int posy, int radius) {
		PosX = posx;
		PosY = posy;
		Radius = radius;
	}
};

class Triangle {
public:
	int PointOne;
	int PointTwo;
	int PointThree;

	Triangle(int TopPoint, int LeftPoint, int RightPoint) {
		PointOne = TopPoint;
		PointTwo = LeftPoint;
		PointThree = RightPoint;
	}
};