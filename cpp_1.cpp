#include <iostream>
using namespace std;
int main(){
	//1//
	cout << "°­¹Î¼ö" << endl;
	//2//
	long long a = 2147483648;
	cout << a << endl;
	//3//
	const float pie = 3.14;
	char ch1 = 65;
	char ch2 = ch1 + 1;
	cout <<pie <<ch1 << ch2 << endl;
	//4//
	char ch;
	int X;
	unsigned short siX;
	unsigned iX;
	long liX;
	long long llix;

	cout << "sizeof(ch):" << sizeof(ch) << endl;
	cout << "sizeof(X):" << sizeof(X) << endl;
	cout << "sizeof(siX):" << sizeof(siX) << endl;
	cout << "sizeof(iX):" << sizeof(iX) << endl;
	cout << "sizeof(liX):" << sizeof(liX) << endl;
	cout << "sizeof(llix):" << sizeof(llix) << endl;
	//5//
	int f;
	cin >> f;
	int c = (f - 32) * 5 / 9;
	cout << c << endl;
	




	}
