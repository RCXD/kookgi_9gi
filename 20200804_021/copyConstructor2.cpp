#include "config.h"

class Member {
private:
//	���ڿ��� ���� �Ҵ�(�迭)�� �޸𸮿� �����ϸ� �޸𸮰� ���ų� ���ڶ�� ������ ����ϰ� �߻��ȴ�.
//	���ѵ� �޸𸮸� ȿ�������� ����Ϸ��� �μ��� �Ѿ���� ���ڿ��� ũ�� ��ŭ �޸𸮸� �������� �Ҵ��ϰ� ���ڿ��� �����ϸ� �ȴ�.
	char *name = NULL;
	char *phone = NULL;
	int age = 0;
public:
	Member() { }
//	Ŭ���� ��ü�� ������ �� �����ڿ��� ���ڿ��� ����� ������ ������ �����ڷ� �Ѿ�� ���ڿ��� ũ�� ��ŭ �޸𸮸� �������� �Ҵ��Ѵ�.
	Member(const char* name, const char* phone, int age) {
//		this->name = name;
//		this->phone = phone;
//		���� ���� �����ϸ� Ŭ������ ��� ���� name�� phone�� ���� �����Ͱ� �ƴ� �����Ͱ� ����� �ּҸ� �Ѱܹް� �ǹǷ� ���ۿ� ������
//		�߻��� �� �ֱ� ������ �������� �μ��� �Ѿ�� �ּҿ� ����� ���ڿ��� ũ�� ��ŭ �޸𸮸� �������� �Ҵ��ϰ� �Ҵ�� �޸𸮿� �����͸�
//		�־���� �Ѵ�.

//		�μ��� �Ѿ�� ���ڿ��� ũ�� ��ŭ �޸𸮸� �������� �Ҵ��Ѵ�.
//		cout << strlen(name) << endl;
//		strlen() �Լ��� �Ѿ�� ���ڿ��� ũ�⸦ ���� �� +1 ��ŭ �޸𸮸� �������� �Ҵ��ؾ� �Ѵ�.
		this->name = new char[strlen(name) + 1];
//		cout << _msize(this->name) << endl;
		this->phone = new char[strlen(phone) + 1];

//		���� �Ҵ�� �޸𸮿� �μ��� �Ѿ�� ���ڿ��� strcpy_s() �Լ��� �����ؼ� �־��ش�.
//		���� �Ҵ�� �޸��� ������ �����ؾ� �� ���� strcpy_s() �Լ��� 2��° �μ��� ������ ���ڿ��� �ִ� ũ�⸦ �����ؾ� �Ѵ�.
//		strcpy_s(this->name, strlen(name) + 1, name);
		strcpy_s(this->name, _msize(this->name), name);
//		strcpy_s(this->phone, strlen(phone) + 1, phone);
		strcpy_s(this->phone, _msize(this->phone), phone);
		this->age = age;
	}

//	�����ڿ��� �������� �Ҵ��� �޸𸮴� Ŭ������ ��ü�� �Ҹ�� �� �޸� ���� ������ �߻����� �ʵ��� �Ҹ��ڿ��� �ݵ�� �������Ѿ� �Ѵ�.
	~Member() {
		cout << "��~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~��" << endl;
		delete[] name;
		delete[] phone;
	}
	
	void toString() {
		cout << name << "�� - ��ȭ��ȣ : " << phone << ", ���� : " << age << endl;
	}
};

void main() {

	/*
//	�޸� ��򰡿� "ȫ�浿"�̶�� ���ڿ��� ����� ���ڿ��� ���� �ּҸ� ������ ���� name�� �����Ѵ�.
	const char* name = "ȫ�浿";
//	������ ���� name�� ����� �ּҰ� ����(�ּҿ� �����)�ϴ� ���ڿ��� '\0'���� �� ���� ����Ѵ�.
	printf("%s\n", name);
	cout << name << endl;
	cout << "sizeof(name) : " << sizeof(name) << endl;	// �μ��� ������ ���� �Ҵ�� �����Ұ� �޸𸮿��� �����ϴ� ũ��
//	cout << "_msize(name) : " << _msize(name) << endl;	// �μ��� ������ ���� �Ҵ�� �����Ұ� �޸𸮿��� �����ϴ� ũ��, malloc, new
	cout << "strlen(name) : " << strlen(name) << endl;	// �μ��� ������ ���ڿ��� �޸𸮿��� �����ϴ� '\0'�� ������ ũ��
	*/

	Member member1("ȫ�浿����", "111-1111", 20);
	cout << "member1 : "; member1.toString();


}