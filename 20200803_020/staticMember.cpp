#include "config.h"

//	��� ������ ũ�� ����(static) ��� ������ �ν��Ͻ� ��� ������ ������ �� �ִ�.
//	���� ��� ������ ���� Ŭ������ ��ü�� ���ʷ� ������ �� �� 1���� �޸𸮿� �����ǰ� �ʱ�ȭ�Ǹ� ���� Ŭ������ ������ ��� ��ü�� �����ؼ�
//	����Ѵ�.
//	�ν��Ͻ� ��� ������ ���� Ŭ������ �����Ǵ� ��� ��ü���� ������ �޸� ������ ������.

class Person {
private:
	int idx = 0;				// Person Ŭ������ ��ü�� ������ �� ���� �ڵ����� 1�� �����Ǵ� ���� ����� ����
	char name[11] = "����";
	bool gender;
public:
//	����(static) ��� ������ ����� ��Ʃ��� 2017 ���� ���������� ���� ����� "="�� ����ؼ� �ʱ�ȭ ��ų �� ����.
//	���ó�� �������� �ʱ�ȭ ����Ʈ�� ����ؼ��� �ʱ�ȭ ��ų �� ����.
//	���� ��� ������ Ŭ���� ���ο����� ���� �ϰ� �ʱ�ȭ�� Ŭ���� �ܺο��� ���Ѿ� �Ѵ�.
	static int count;

	Person() { }
	Person(const char name[11], bool gender) {
		idx = ++count;
		strcpy_s(this->name, name);
		this->gender = gender;
	}

	void toString() {
		cout << idx << ". " << name << "(" << (gender ? "��" : "��") << ")" << endl;
	}

	char* getName() {
		return name;
	}
	void setName(const char name[11]) {
		strcpy_s(this->name, name);
	}

	bool isGender() {
		return gender;
	}
	void setGender(bool gender) {
		this->gender = gender;
	}
};

//	���� ��� ������ �ʱ�ȭ�� Ŭ���� �ܺο��� �ؾ��Ѵ�.
//	�ڷ��� Ŭ�����̸�::������������̸� = �ʱ�ġ;
//	"::"�� ������ �����ڶ� �θ��� � Ŭ������ ���� ����ΰ��� �����Ѵ�.
int Person::count = 0;

void main() {

	Person person1("ȫ�浿", true);		// Person Ŭ���� ��ü�� ó�� ������ �� ���� ��� ���� count�� �����ǰ� �ʱ�ȭ�ȴ�.
	person1.toString();
	Person person2("�Ӳ���", false);	// �̹� ���� ��� ���� count�� �޸𸮿� �����ϱ� ������ �ٽ� ������ �ʰ� ������ count�� ����Ѵ�.
	person2.toString();
	Person person3("����", true);
	person3.toString();

	person1.count = 100;
	cout << "person1.count = " << person1.count << endl;
//	���� ��� ������ ���� Ŭ������ ���� ��� ��ü�� �����ؼ� ����ϹǷ� Ư�� ��ü�� ���� ��� ���� ���� �����ϸ� ��� ��ü�� ���� ��� ����
//	���� ����ȴ�.
	cout << "person2.count = " << person2.count << endl;
	cout << "person3.count = " << person3.count << endl;

	Person person4("������", true);
	person4.toString();

}