#include "config.h"

class Member {
private:
	char *name = NULL;
	char *phone = NULL;
	int age = 0;
public:
	Member() { }
	Member(const char* name, const char* phone, int age) {
		this->name = new char[strlen(name) + 1];
		this->phone = new char[strlen(phone) + 1];
		strcpy_s(this->name, strlen(name) + 1, name);
		strcpy_s(this->phone, _msize(this->phone), phone);
		this->age = age;
	}

	~Member() {
		delete[] name;
		delete[] phone;
		cout << "��~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~��" << endl;
	}
	
	void toString() {
		cout << name << "�� - ��ȭ��ȣ : " << phone << ", ���� : " << age << endl;
	}

	void setName(const char name[11]) {
		strcpy_s(this->name, strlen(name) + 1, name);
	}

//	�⺻ ���� �����ڸ� ����� ���� �Ҵ�� ��ü�� �����ϸ� 2���� �������� �߻��ȴ�.
//	1. �����Ϸ��� �ڵ����� ������ִ� ���� �����ڴ� ���� �Ҵ�� �޸𸮸� ����(�ּ�) ���縦 �ϱ� ������ ���� �Ǵ� �纻 �ϳ��� �����Ǹ� ����
//	   �޸𸮸� �����ϱ� ������ ��� ���� �Ǵ� �纻�� �����ȴ�.
//	2. ���α׷��� ����� �� �Ҹ��ڿ��� �����ڰ� ���� �Ҵ��� �޸𸮸� ������ �� ���� ��ü�� �Ҹ�Ǹ鼭 ���� ��ü�� �纻 ��ü�� ���� �����ϴ�
//	   �޸𸮸� �����ع����� ������ �纻 ��ü�� ���ŵ� �� �̹� ���ŵǹ��� �޸𸮸� �� �����Ϸ��� �õ��� �ϱ� ������ ������ �߻��ȴ�.

	/*
//	�����Ϸ��� �ڵ����� �����ϴ� �⺻ ���� ������
//	�����Ϸ��� �ڵ����� ������ִ� �⺻ ���� �����ڴ� �ּҸ� �����ϴ� ���� ���縦 �����ϹǷ� ������ �纻�� �ּҰ� �����ȴ�.
	Member(Member& member) {
		cout << "�⺻ ���� �����ڰ� ����˴ϴ�." << endl;
		name = member.name;
		phone = member.phone;
		age = member.age;
	}
	*/

//	�⺻ ���� �����ڴ� ���� 2���� �������� �߻���Ų��. => ���� �����ڸ� ����(����) ���縦 �ϵ��� override �Ѵ�.
	Member(Member& member) {
//		���� �������� ���� ������ �Ѿ���� �������� ũ�� ��ŭ �޸𸮸� �������� �Ҵ��ϰ� strcpy_s() �Լ��� ����ؼ� �ּҰ� �ƴ� �����͸�
//		�����ϴ� ���� ���簡 ����ǵ��� �Ѵ�.

		name = new char[strlen(member.name) + 1];
		phone = new char[strlen(member.phone) + 1];
		strcpy_s(name, strlen(member.name) + 1, member.name);
		strcpy_s(phone, _msize(phone), member.phone);
		age = member.age;

	}
};

void main() {

	Member member1("ȫ�浿����", "111-1111", 20);
	cout << "member1 : "; member1.toString();
	Member member2 = member1;
	cout << "member2 : "; member2.toString();
	Member member3(member1);
	cout << "member3 : "; member3.toString();
	Member* member4 = new Member(member1);
	cout << "member4 : "; member4->toString();
	cout << "====================================================" << endl;

	member1.setName("����ٺ�");
	cout << "member1 : "; member1.toString();
	cout << "member2 : "; member2.toString();
	cout << "member3 : "; member3.toString();
	cout << "member4 : "; member4->toString();
	cout << "====================================================" << endl;

	delete member4;

}