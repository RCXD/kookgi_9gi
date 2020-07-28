#include "config.h"

void main() {

	int a = 100;		// �Ϲ� ���� => ������(���)�� ����Ѵ�.

//	�����Ͷ� ������ �迭�� �޸𸮿� ������ �ּҸ� ���Ѵ�. => �����͸� ����ϴ� ������ ������ ������ �θ���.
//	������ ������ ������ �� �����Ϸ����� ������ �������� �˷��ֱ� ���� ������ �̸� �տ� "*"�� �ٿ��� �����Ѵ�.
//	int* p;				// ������ ���� => ������ ������ ���� �����Ƿ� ������ �������� �����Ⱑ ����ִ�.

//	������ ����� ���̴� �ڷ����� ������ ������ �ּҸ� ������ ������ �迭�� �ڷ����� �����ָ� �ǰ� ������ ���� ����� �ٿ��ִ� �ڷ�����
//	ũ��� ������� ������ ������ ������ 4byte�� ũ�⸦ ������.
//	printf("������ ������ ũ�� : %d\n", sizeof(p));
//	int* p = NULL;		// ������ ������ �����ϰ� NULL�̳� 0�� �ʱ�ġ�� �����ϸ� �� ������ ������ ������ �� �ִ�.

//	������ ������ ������(���)�� ������� �ʰ� ������(�ּ�)�� ����ϴ� ������ ���Ѵ�. => �����͸� ������ ������ �߻��ȴ�.
//	int* p = 100;		// ������(���)�� ������ �����Ƿ� ������ �߻��ȴ�.
//	int* p = a;			// ���� a�� ����� ������(���)�� ������ �����Ƿ� ������ �߻��ȴ�.

//	������ ������ �Ϲ� ������ ���� ������ ���� ����� �ʱ�ȭ ��ų �� �ְ� ���� �� �ΰ� ���߿� �ʱ�ȭ ���Ѽ� ����� �� �ִ�.
//	int* p = &a;		// ������ ������ �Ϲ� ���� a�� �޸𸮿� ������ �ּҸ� �����Ѵ�. => ������ ���� ���� �� �ʱ�ȭ
	int* p;
	p = &a;				// ������ ������ �Ϲ� ���� a�� �޸𸮿� ������ �ּҸ� �����Ѵ�. => ������ ���� ���� �� ���߿� �ʱ�ȭ

//	printf("������ ������ ����� ���� : %d\n", p);
//	printf("������ ������ ����� ���� : %08x\n", p);
//	cout << "������ ������ ����� ���� : " << p << endl;
//	printf("======================================================\n");

//	"&"�� ���� �����ڷ� ���Ǹ� ��Ʈ���� and ������ �ϴ� ��Ʈ �����ڷ� ���ǰ� ���� �����ڷ� ���Ǹ� �����Ұ� �޸𸮿� ������ �ּҸ�
//	������ ���� �����ڷ� ���ȴ�.

//	��Ʈ ������ : &(and), |(or), ~(not, 0 => 1, 1 => 0, 1�� ����), ^(xor, ��Ÿ�� ������, �� ���� ��Ʈ�� �ٸ��� 1)
	cout << "6 & 5 = " << (6 & 5) << endl;	// 4
	cout << "6 | 5 = " << (6 | 5) << endl;	// 7
	cout << "6 ^ 5 = " << (6 ^ 5) << endl;	// 3
	cout << "~6 = " << ~6 << endl;			// -7 

//	6 : 0000 0110		6 : 0000 0110		6 : 0000 0110		6 : 0000 0110
//	5 : 0000 0101		5 : 0000 0101		5 : 0000 0101		~ : 1111 1001 => �ֻ��� bit�� 1�̹Ƿ� �����̴�.
//	& : 0000 0100(4)	| : 0000 0111(7)	^ : 0000 0011(3)	2�� ������ �纸���� ���Ѵ�. => 0000 0111 => 7 => -7
	printf("======================================================\n");

	cout << "���� a�� ����� ���� : " << a << endl;
	cout << "���� a�� �޸𸮿� ������ �ּ� : " << &a << endl;
	cout << "������ ���� p�� ����� ���� : " << p << endl;

//	"*"�� ���� �����ڷ� ���Ǹ� ������ �ǹ������� ���� �����ڷ� ���Ǹ� ������ ������ ����� �ּҷ� ������ �� �ּҿ� ����� ������
//	������(�����ϴ�) ���� �����ڷ� ���ȴ�.
	cout << "������ ���� p�� �����ϴ� ���� : " << *p << endl;
	printf("======================================================\n");

//	����(reference) ���� => c++���� �߰�
//	���� ������ ������ ������ �Ȱ��� ������ �迭�� �޸𸮿� ������ �ּҸ� ����Ѵ�.
//	���� ������ ������ �� �����Ϸ����� ���� �������� �˷��ֱ� ���ؼ� ���� �̸� �տ� "&"�� �ٿ��� �����Ѵ�.
//	������ ������ �ּҸ� �־��� �� ����� ���ÿ� �־��ִ� ���� ���� �� ���߿� �־��ִ� ��츦 ��� ����� �� ������ ���� ������ �ݵ��
//	����� ���ÿ� �ʱ�ȭ ���Ѿ� �Ѵ�.
//	������ ������ �ּҸ� �־��� ���� ���� �̸� �տ� ���� ������ "&"�� �ٿ��� ������ ���� ������ �ּҸ� �־��� ���� �׳� ���� �̸��� ������
//	c++ �����Ϸ��� �˾Ƽ� �� ������ �޸𸮿� ������ �ּҸ� ���� �־��ش�.

	int b = 200;
//	int& r;				// ���� ���� ����� �ʱ�ȭ�� ��Ű�� �ʾƼ� ������ �߻��ȴ�.
//	int& r = 200;		// ����
//	int& r = &b;		// ����
	int& r = b;			// ���� ���� r�� ���� b�� ������ �ּҰ� ����ȴ�.

	cout << "���� b�� ����� ���� : " << b << endl;
	cout << "���� b�� �޸𸮿� ������ �ּ� : " << &b << endl;

//	���� ������ ����� �ּҸ� ����ؾ� �Ѵٸ� ���� ���� �տ� "&"�� �ٿ��� �Ѵ�.
	cout << "���� ���� r�� ����� ���� : " << &r << endl;

//	������ ������ ������ ������ �����ϴ� �����͸� �������� ���� �����ڸ� ����ؾ� ������ ���� ������ ���� ������ �����ϴ� �����͸� ������
//	�ϴ� ��� ���� ������ �̸��� ����ϸ� �ȴ�.
	cout << "���� ���� r�� �����ϴ� ���� : " << r << endl;

}