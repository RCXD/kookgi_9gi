#include "config.h"

//	() �ȿ� "*"�� ���� ���� �̸��� ���� �Լ� ������ Ÿ���� �ȴ�. => �Լ��� �޸𸮿� ������ �ּҸ� ����Ѵ�.
//	Func�� ���� Ÿ���� int�̰� int�� �μ��� 2�� �Ѱܹ޴� �Լ��� �ּҸ� ����ϴ� �Լ� ������ Ÿ���̴�.
typedef int (*Func)(int, int);

int Add(int a, int b) { return a + b; }
int Sub(int a, int b) { return a - b; }
int Mul(int a, int b) { return a * b; }
int Div(int a, int b) { return a / b; }

void main() {

//	typedef���� ������ Func Ÿ���� �Լ� ������ ������ �Լ��� �޸𸮿� ������ �ּҸ� �־��ش�.
	Func func = Add;
	cout << func << endl;
	cout << Add(5, 3) << endl;
	cout << func(5, 3) << endl;
	cout << "=============================" << endl;

	Func f[] = { Add, Sub, Mul, Div };
	for (int i = 0; i < 4; i++) {
//		cout << f[i] << endl;
		cout << f[i](5, 3) << endl;
	}

}