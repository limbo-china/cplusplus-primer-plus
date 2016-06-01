#include <iostream>
using namespace std;
class complex{
private:
    double x;
    double y;
public:
    complex();
    ~complex();
    complex(double n1,double n2);
    complex operator+(const complex &c) const;
    complex operator-(const complex &c) const;
    complex operator*(const complex &c) const;
    complex operator~() const;

    friend complex operator*(double x, const complex &c); //c*x invalid

    friend std::ostream & operator<<(std::ostream &os ,const complex &c);
    friend std::istream & operator>>(std::istream &is ,complex &c);
};
