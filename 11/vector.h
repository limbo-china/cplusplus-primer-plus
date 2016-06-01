#ifndef _VECTOR_H
#define _VECTOR_H

#include <iostream>
using namespace std;
namespace VECTOR {
class Vector {
public:
enum Mode {
  RECT, POL
};

private:
double x;
double y;
double mag;
double ang;
Mode mode;

void set_mag();
void set_ang();
void set_x();
void set_y();

public:
Vector();
Vector(double n1, double n2, Mode form = RECT);
void reset(double n1, double n2, Mode form = RECT);

~Vector();
double xval() const
{
  return x;
}
double yval() const
{
  return y;
}
double magval() const
{
  return sqrt(x * x+y * y);
}
double angval() const
{
    if (x == 0.0 && y == 0.0)
         return  0.0;
    else
         return atan2(y, x);
}
void polar_mode();
void rect_mode();

Vector operator +(const Vector &b) const;
Vector operator -(const Vector &b) const;
Vector operator -() const;
Vector operator *(double n) const;

friend Vector operator *(double n, const Vector &b);

friend std::ostream &operator <<(std::ostream &os, const Vector &b);
};
}
#endif
