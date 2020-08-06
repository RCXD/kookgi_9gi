#include "config.h"

//	�Լ��� ó���� ������ a, b�� �����͸� ó���� �Լ��� �ּҸ� ����ϴ� ������(*pFunc)�� �μ��� ������ �Լ�
int func(int a, int b, int (*pFunc)(int, int)) {
	return (*pFunc)(a, b);
}

int Add(int a, int b) { return a + b; }
int Sub(int a, int b) { return a - b; }
int Mul(int a, int b) { return a * b; }
int Div(int a, int b) { return a / b; }

void main() {

//	Add �Լ��� �ּҸ� �Լ� ������ ������ �����Ѵ�.
	int (*f)(int, int) = Add;
	cout << func(5, 3, f) << endl;

}