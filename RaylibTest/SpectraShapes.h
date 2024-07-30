using namespace std;
/* 
All of the classes below are used to store the data of the shapes, which are used to pass the shape's values over to other parts of the application.
At another point, these values contained within the Spectra.h file, but for now they will be in here to make reading the code easier.

The Rect class contains the Values for the position of the top left corner with the PosX and PosY values, and the Width and height is the actual size of the shape.

The circle class contains the centre position of the circle, and the radius of the shape when it is rendered inside of the application.

The triangle class contains the positions of the three corners of the shape. PointOne is the top corner, PointTwo is the bottom left corner and the PointThree is the bottom right.

All of these values will later on contain values for the anchor point for rendering, but that will be implemented when the graphics rendering is properly implemented.
*/


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