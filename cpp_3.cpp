#include <iostream>
using namespace std;
int main() {
	//1 재귀함수 모르겠어요//
	//2//
	int a, b;
	cout << "enter two variables";
	cin >> a >> b;
	cout << "1.add" << endl;
	cout << "2.substract" << endl;
	cout << "3.multiply" << endl;
	cout << "4.divide" << endl;
	cout << "5.exit" << endl;
	cout << "select operation :";

	int option;
	do {
		cin >> option;
		switch (option) {
		case 1:
			cout << a + b << endl
				;
			break;
		case 2:
			cout << a - b << endl;
			break;
		case 3:
			cout << a * b << endl;
			break;
		case 4:
			cout << a / b << endl;
			break;
		case 5:
			cout << "end the program" << endl;
			break;
		default:
			cout << "wrong input" << endl;
			break;

		}
	} while (option != 5);
	//3//
	cout << "단수입력 :";
	int dan;
	while (true) {
		cin >> dan;
		if (dan == 0) {
			cout << "프로그램을 종료합니다";
			break;
		}


		else if (0 < dan && dan < 10) {
			for (int i = 1; i < 10; i++)
			{
				cout << dan << "*" << i << "=" << dan * i << endl;
			}

		}

		else {

			cout << "다시 입력해주세요";

		}
	}
	//4//
	int x;
	cin >> x;
	int cnt = 0;
	int new_x;
	new_x = x;

	do {

		if (new_x / 10 + new_x % 10 >= 10) {
			new_x = new_x % 10 * 10 + (new_x / 10 + new_x % 10) % 10;
			cnt++;
			cout << new_x << endl;
		}
		else {
			new_x = new_x % 10 * 10 + (new_x / 10 + new_x % 10);
			cnt++;
			cout << new_x << endl;
		}
	} while (x != new_x);
	cout << cnt;





	//5//
	int fib[20];
	fib[0] = 0;
	fib[1] = 1;
	int n;
	cin >> n;
	for (int i = 2; i < n; i++) {
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	cout << fib[n-1];




	return 0;
}