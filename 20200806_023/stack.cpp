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

//	���ÿ� �����͸� �Է�(push)�ϴ� �Լ�
	void push() {
//		���ÿ� ������ �����͸� �Է¹޴´�.
		int data;
		cout << "���ÿ� ������ �����͸� �Է��ϼ��� : ";
		cin >> data;
//		������ ����á�� Ȯ�� �� ������ ������ ������ �����͸� �����Ѵ�.
		if (++top >= stackSize) {	// �����÷ο� �˻�
//			������ ������ �����̹Ƿ� �����÷ο� ó���� �Ѵ�.
			cout << "������ �������� " << data << "�� ������ �� �����ϴ�." << endl;
//			�����÷ο찡 �߻��Ǿ����Ƿ� ������ top�� �����ϱ� ���� ������ �ǵ����ش�.
//			top--;
			top = stackSize - 1;
		}
		else {
//			���ÿ� �����͸� ������ ������ ���� �����̹Ƿ� ������ top ��ġ�� �����͸� �����Ѵ�.
			stack[top] = data;		// push
		}
//		���ÿ� ����� ������ ����� �����ִ� �Լ��� �����Ѵ�.
		list();
	}

//	���ÿ� ����� ������ ����� ����ϴ� �Լ�
	void list() {
		if (top <= -1) {
			cout << "���ÿ� ����� �����Ͱ� �����ϴ�.";
		}
		else {
			cout << "���ÿ� ����� ������ : ";
			for (int i = 0; i <= top; i++) {
				if (i > 0) {
					cout << ", ";
				}
				cout << stack[i];
			}
		}
		cout << endl;
	}

//	���ÿ� ����� �����͸� ���(pop)�ϴ� �Լ�
	void pop() {
//		������ ����ֳ�(����÷ο� �ΰ�) �˻��ؼ� ����÷ο찡 �ƴϸ� �����͸� pop �Ѵ�.
		if (top > -1) {		// ����÷ο찡 �ƴѰ� �˻�
//			����÷ο찡 �ƴϸ� top ��ġ�� ����� �����͸� ����ϰ� top�� 1���� ��Ų��.
			cout << "POP DATA : " << stack[top--] << endl;
		}
		list();
	}
};

void main() {

//	������ ũ�⸦ �Է¹޾� �Է¹��� ũ�� ��ŭ ������ �����ϴ� Ŭ������ ��ü�� �����.
	int stackSize;
	cout << "������ ũ�⸦ �Է��ϼ��� : ";
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
				stack.pop();
				break;
			case 3:
				stack.list();
				break;
		}
	}
	cout << "���α׷��� �����մϴ�. ���̹���~~~~~" << endl;

}