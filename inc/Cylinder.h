# ifndef CYLINDER_H
# define CYLINDER_H

# include <iostream>

using namespace std;

class Cylinder
{
private:
    int radius;
    int height;
public:
    Cylinder() : radius(0), height(0) {}
    Cylinder(int r, int h){
        radius = r;
        height = h;
    }
    double SurfaceArea();
    double Volume();
    double Circumference();
    friend istream &operator>>(istream & in, Cylinder & cyl);
    friend ostream &operator<<(ostream & out, Cylinder & cyl);
};

# endif



