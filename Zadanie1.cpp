#include <iostream>

using namespace std;

struct Point3D
{
private:

	int x, y, z;

public:

	Point3D()
	{
		x = 1;
		y = 1;
		z = 1;
	}

	Point3D(int valx, int valy, int valz)
	{
		x = valx;
		y = valy;
		z = valz;
	}


	void Print()
	{
		cout << x << " " << y << " " << z << endl;
	}

};

int main()
{
	Point3D a(1, 2, 3);
	a.Print();

	Point3D b;
	b.Print();

}
