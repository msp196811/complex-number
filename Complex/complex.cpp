#include "complex.h"

using namespace std;

Complex operator+(double x, Complex &c) {
	return (c + x);
}
Complex operator+(Complex &c,double x) {
	Complex temp;
	temp.set_A(x + c.get_A());
	temp.set_Bi(c.get_Bi());
	return temp;
}

Complex &operator+(Complex &x,Complex &y) {
	Complex temp;
	temp.set_A(x.get_A() + y.get_A());
	temp.set_Bi(x.get_Bi() + y.get_Bi());
	return temp;
}
Complex &operator-(Complex &x,Complex &y) {
	Complex temp;
	temp.set_A(x.get_A() - y.get_A());
	temp.set_Bi(x.get_Bi() - y.get_Bi());
	return temp;
}
Complex operator-(double x, Complex& c) {
	return (c - x);
}
Complex operator-(Complex &c, double x) {
	return Complex(x - c.get_A(), c.get_Bi());
}
Complex &operator*(Complex &x,Complex &y) {
	Complex temp;
	temp.set_A(x.get_A() * y.get_A() - x.get_Bi() * y.get_Bi());
	temp.set_Bi(x.get_A() * y.get_Bi() + x.get_Bi() * y.get_A());
	return temp;
}
Complex operator*(double x, Complex& c) {
	return (c * x);
}
Complex operator*(Complex& c, double x) {
	return Complex(x * c.get_A(), x * c.get_Bi());
}



ostream &operator << (ostream& o, Complex& c)
{
	o << "a=" << c.get_A() <<"bi="<<c.get_Bi() <<endl;
	return o;
}

istream& operator >> (istream& i, Complex& c)
{
	double x = 0, y = 0;
	i >> x >> y;
	c.set_A(x);
	c.set_Bi(y);
	return i;
}