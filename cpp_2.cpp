#include <iostream>
using namespace std;
void swap(int* x, int* y) {
	int* z;
	z = x;
	x = y;
	y = z;



}

int main() {
	//1//
	int str2[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << str2[5] << endl;


	//2//
	char str1[10] = { 'H','I','E','A','Z','L','T','L','U','O' };
	cout << str1[0] << str1[2] << str1[5] << str1[5] << str1[9] << endl;
	
	
	//3//
	char str[6] = "HELLO";
	char* pointer = &str[0];
	cout << *pointer << *(pointer + 1) << *(pointer + 2) << *(pointer + 3) << *(pointer + 4) << endl;


	//4//
	int a = 10, b = 20;
	cout << a << ", " << b << endl;
	swap(a, b);
	cout << a << ", " << b << endl;
	return 0;
}
