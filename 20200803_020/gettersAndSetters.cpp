#include "config.h"

class Person {
private:
	char name[11] = "����";
	bool gender = false;
public:
	Person() { }
	Person(const char name[11], bool gender) {
		strcpy_s(this->name, name);
		this->gender = gender;
	}

	void toString() {
		cout << name << "(" << (gender ? "��" : "��") << ")" << endl;
	}

//	private �������� ������ ��� ������ Ŭ���� �ܺο��� ������ �� ���µ� �� ��Ģ�� ���� ���� ������ ������ �������� �ʿ��� ��� ����� 
//	����ϴ� �Լ��� �ִµ� �̸� getter, setter�� �θ���.

//	getter �Լ�
//	�̸��� get���� �����ϰ� ��� ���� �̸��� �ٿ��� �����. => bool ������ ��� ���� getter�� get�� �ƴ϶� "is"�� �����ϴ°� �����̴�.
//	���� Ÿ���� ��� ������ �ڷ����� ���� ���μ��� ����. => ��� ������ �����Ѵ�.

	char* getName() {	// name�� getter
		return name;
	}

	bool isGender() {	// gender�� getter
		return gender;
	}

//	setter �Լ�
//	�̸��� set���� �����ϰ� ��� ���� �̸��� �ٿ��� �����.
//	���� Ÿ���� void�� ����ϰ� ���μ��� private ������ ��� ������ ������ �����͸� �Ѱܹ޴´�. => �Ѱܹ��� �����͸� ��� ������ �����Ѵ�.

	void setName(const char name[11]) {
		strcpy_s(this->name, name);
	}

	void setGender(bool gender) {
		this->gender = gender;
	}

};

void main() {

	Person person1;
	person1.toString();
	Person* person2 = new Person();
	person2->toString();

	Person person3("ȫ�浿", true);
	person3.toString();
	Person* person4 = new Person("������", false);
	person4->toString();

//	cout << person3.name << endl;			// name�� private �����̹Ƿ� Ŭ���� �ܺο��� ������ �� ����.
	cout << person3.getName() << endl;		// getName() �Լ�(getter)�� ����� private ����� name�� ����� �����͸� ���´�.
	cout << person3.isGender() << endl;

	person3.setName("���е�");
	person3.toString();
	person4->setGender(true);
	person4->toString();

	delete person2;
	delete person4;

}