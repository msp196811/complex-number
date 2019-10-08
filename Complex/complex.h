#include <iostream>


using namespace std;


class Complex {
private:
	double a, bi;
public:
	Complex() { 
		a = 0; 
		bi = 0; 
	};
	Complex(double x) {
		a = x;
		bi = 0;
	}
	Complex(double x, double y) {
		a = x; 
		bi = y;
	}
	~Complex() {
		cout << "Сработал деструктор" << endl;
	}
	double get_A() {
		return a;
	}
	double get_Bi() {
		return bi;
	}
	double set_A(double value) {
		a = value;
		return 1;
	}
	double set_Bi(double value) {
		bi = value;
		return 1;
	}

	Complex& operator=(Complex c) {
		a = c.get_A();
		bi = c.get_Bi();
		return *this;
	}
	friend Complex& operator+(Complex&,Complex&);
	friend Complex operator+(Complex&, double x);
	friend Complex operator+(double x, Complex&);
	friend Complex& operator-(Complex &,Complex &);
	friend Complex operator-(double x, Complex&);
	friend Complex operator-(Complex&, double x);
	friend Complex& operator*(Complex&, Complex&);
	friend Complex operator*(double x, Complex&);
	friend Complex operator*(Complex&, double x);

	friend ostream& operator<<(ostream&, Complex&);
	friend istream& operator>>(istream&, Complex&);
};
