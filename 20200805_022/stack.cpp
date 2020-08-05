#include "config.h"

class Stack {
private:
	int* stack = NULL;		// ���� => ������ ũ�� ��ŭ �޸𸮸� ������ �Ҵ��Ѵ�.
	int stackSize = 0;		// ������ ũ��
	int top = -1;			// ���� ������(SP) => ���ÿ� ����� �������� ����
public:
//	������ ũ�⸦ �μ��� �Ѱܹ޾� �Ѱܹ��� ũ�� ��ŭ ������ ����� ������ ũ�⸦ �Ѱܹ��� ������ 10���� �����͸� ������ �� �ִ� ������ 
//	�����ڿ��� �����Ѵ�.
	/*
	Stack() {
		stackSize = 10;
		stack = new int[stackSize];
	}
	Stack(int stackSize) {
		this->stackSize = stackSize;
		stack = new int[stackSize];
	}
	*/
	Stack(int stackSize = 10) {
		this->stackSize = stackSize;
		stack = new int[stackSize];
	}

//	�Ҹ��ڿ��� �����ڿ��� �Ҵ�� ���� �޸𸮸� �����Ѵ�.
	~Stack() {
		delete[] stack;
	}
};

void main() {

//	������ ũ�⸦ �Է¹޾� �Է¹��� ũ�� ��ŭ ������ �����ϴ� Ŭ������ ��ü�� �����.
	int stackSize;
	cout << "������ ũ�⸦ �Է��ϼ��� : " << endl;
	cin >> stackSize;
	Stack stack(stackSize);

	int menu = 0;
	while (menu != 4) {
		do {
			cout << "===============================" << endl;
			cout << " 1.PUSH  2.POP  3.LIST  4.QUIT " << endl;
			cout << "===============================" << endl;
			cout << "�޴��� �Է��ϼ��� : ";
			cin >> menu;
		} while (menu < 1 || menu > 4);

		switch (menu) {
			case 1:
				stack.push();
				break;
			case 2:
				cout << "POP" << endl;
				break;
			case 3:
				cout << "LIST" << endl;
				break;
		}
	}
	cout << "���α׷��� �����մϴ�. ���̹���~~~~~" << endl;

}