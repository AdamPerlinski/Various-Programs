// ConsoleApplication15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
int a, b, c;
float d, pd, x1v, x2v, x1u, x2u;
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Podaj a" << endl;
	cin >> a;
	cout << "Podaj b" << endl;
	cin >> b;
	cout << "Podaj c" << endl;
	cin >> c;
	if (a == 0 && b == 0 && c == 0) {
		cout << "0";
	}
	else {
		if (a == 1) {
			cout << "xx";
		}
		if (a == -1) {
			cout << "-xx";
		}
		if (a < -1) {
			cout << a << "xx";
		}
		if (a > 1) {
			cout << a << "xx";
		}
		if (b == 1) {
			cout << "+x";
		}
		if (b == -1) {
			cout << "-x";
		}
		if (b < -1) {
			cout << b << "x";
		}
		if (b > 1) {
			cout << "+" << b << "x";
		}
		if (c > 0) {
			cout << "+" << c;
		}
		if (c < 0) {
			cout << c;
		}
	}
	cout << "=0\n";
	if (a != 0) {
		d = b*b - (4 * a*c);
		cout << "d =" << d << " \n" << endl;

		if (d > 0) {
			if (d <= 25) {
				pd = 3;
				pd = pd - ((pd*pd - d) / (2 * pd));
				pd = pd - ((pd*pd - d) / (2 * pd));
				pd = pd - ((pd*pd - d) / (2 * pd));
				pd = pd - ((pd*pd - d) / (2 * pd));
				x1v = (-b - pd) / 2 * a;
				cout << "x1v:" << x1v << "\n" << endl;
				x2v = (-b + pd) / 2 * a;
				cout << "x2v:" << x2v << "\n" << endl;
			}
			if (d > 25) {
				cout << "Nie policzymy pierwiastka wiêkszego ni¿ 25" << endl;
			}
		}
		if (d == 0) {
			x1v = -b / (2 * a);
			cout << "x1v:" << x1v << "\n" << endl;
		}
		if (d < 0 && (d >= -25 && -d <= 25)) {
			x1v = -b / (2 * a);
			cout << x1v << "\n" << endl;
			x2v = x1v;
			cout << x2v << "\n" << endl;
			if (d < 0) { d = -d; }
			pd = 5;
			pd = pd - ((pd*pd - d) / (2 * pd));
			pd = pd - ((pd*pd - d) / (2 * pd));
			pd = pd - ((pd*pd - d) / (2 * pd));
			pd = pd - ((pd*pd - d) / (2 * pd));
			x1u = -(pd / 2 * a);
			cout << x1u << "\n" << endl;
			x2u = -x1u;
			cout << x2u << "\n" << endl;
			cout << "Z1 = " << x1v;
			if (x1u > 0) {
				cout << "+" << x1u << "i" << endl;
			}
			else
			{
				cout << x1u << "i" << endl;
			}
			cout << "Z2 = " << x2v;
			if (x2u > 0) {
				cout << "+" << x2u << "i" << endl;
			}
			else
			{
				cout << x2u << "i" << endl;
			}
		}
		if (d < -25 || d > 25) {
			cout << "Nie policzymy pierwiastka wiêkszego ni¿ 25" << endl;
		}
	}
		if (a == 0) {
			if (b != 0) {
				x1v = -(c / b);
				cout << "x1v = " << x1v << endl;
			}
			if (b == 0 && c != 0) {
				cout << "Rownanie sprzeczne" << endl;
			}
			if (b == 0 && c == 0){
				cout << "Rownanie tozszamosciowe" << endl;
			}
		
	}
	system("PAUSE");
	getchar();
	return 0;
}

