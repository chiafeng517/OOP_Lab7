# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
# include<cmath>
# include<iomanip>
using namespace std;
double Cylinder :: SurfaceArea(){
    
    return M_PI * radius * 2 * (height + radius);
}

double Cylinder :: Volume(){

    return M_PI*radius*radius*height;
}

double Cylinder :: Circumference(){

    return M_PI*2*radius;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
	in >> cldr.radius >> cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out << fixed << setprecision(3) << "Circumference: " << cldr.Circumference() << endl;
	out << "SurfaceArea: " << cldr.SurfaceArea() << endl;
	out << "Volume: " << cldr.Volume() << endl;
    return out;
}

# endif
