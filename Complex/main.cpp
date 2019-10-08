#include <iostream>
#include <cmath>
#include "complex.h"
using namespace std;


int main() {

	setlocale(LC_ALL, "ru");
	Complex A(13,1), B(7,-6), C(1);
	C =  A * B;
	cout << C << endl;
	C = A + 10.5;
	C = 10.5 + A;
	cout << C << endl;
	C = A + B + C;
	C = A = B = C;
}