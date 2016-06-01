#include "complex.h"

complex::complex(){
    x=y=0.0;
}
complex::complex(double n1,double n2){
    x=n1;
    y=n2;
}
complex::~complex(){}
complex complex::operator+(const complex &c) const{
    return complex(x+c.x,y+c.y);
}
complex complex::operator-(const complex &c) const{
    return complex(x-c.x,y-c.y);
}
complex complex::operator*(const complex &c) const{
    return complex(x*c.x-y*c.y,x*c.y+y*c.x);
}
complex complex::operator~() const{
    return complex(x,-y);
}
complex operator*(double x, const complex &c){
    return complex(x*c.x,x*c.y);
}

std::ostream & operator<<(std::ostream &os ,const complex &c){
    os<<"("<<c.x<<","<<c.y<<"i)";
    return os;
}
std::istream & operator>>(std::istream &is ,complex &c){  //不能用const
    is>>c.x>>c.y;
    return is;
}

int main(){
    complex a(3.0,4.0);
    complex c;
    cout<<"enter complex:\n";
    while(cin>>c){
        cout<<"c is"<<c<<endl;
        cout<<"~c is"<<~c<<endl;
        cout<<"a is"<<a<<endl;
        cout<<"a+c is"<<a+c<<endl;
        cout<<"a-c is"<<a-c<<endl;
        cout<<"a*c is"<<a*c<<endl;
        cout<<"2*c is"<<2*c<<endl;   //不能写成 c*2,除非再写个函数
        cout<<"enter complex:\n";
    }
    return 0;
}
