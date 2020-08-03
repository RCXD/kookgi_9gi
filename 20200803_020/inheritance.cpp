#include "config.h"

//	�θ�(����, ����, ���) Ŭ����
class Parent {
private:
	char name[11] = "����";
	bool gender = false;
public:
	Parent() {
		cout << "�θ� Ŭ������ �⺻ �����ڰ� ����˴ϴ�." << endl;
	}
	Parent(const char name[11], bool gender) {
		strcpy_s(this->name, name);
		this->gender = gender;
	}

	void toString() {
		cout << name << "(" << (gender ? "��" : "��") << ")" << endl;
	}

	char* getName() {
		return name;
	}
	bool isGender() {
		return gender;
	}
};

//	����̶� �θ� Ŭ�������� ������ ��� ��� ������ �Լ��� �ڽ� Ŭ�������� ������ �������� �ʾƵ� ������ �� ó�� ����� �� �ִ� ���� ���Ѵ�.
//	class �ڽ�Ŭ�����̸� : ��ӱ��������� �θ�Ŭ�����̸�

//	��� ���� ������
//	private   => �θ� Ŭ�������� ������ ���� ���ѿ� ���� ���� ������ �ڽ� Ŭ������ private �������� ��ӵȴ�.
//	protected => �θ� Ŭ������ ������ ���� ������ private �����̸� private���� ������ ������ protected �������� ��ӵȴ�.
//	public    => �θ� Ŭ�������� ������ ���� ������ �״�� ��ӵȴ�.

//	��� ���� ������		�θ� Ŭ������ ���� ����			�ڽ� Ŭ������ ��ӵǴ� ���� ����
//	=========================================================================================
//							private							private
//	private					protected						private
//							public							private
//	=========================================================================================
//							private							private
//	protected				protected						protected
//							public							protected
//	=========================================================================================
//							private							private
//	public					protected						protected
//							public							public
//	=========================================================================================

//	�ڽ�(����, ����, �Ļ�) Ŭ����
//	Parent Ŭ������ ��ӹ޾� Child Ŭ������ �����.
//	Child Ŭ������ Parent Ŭ������ ��� ���� name, gender�� ��� �Լ� toString()�� ������ �������� �ʾƵ� ����� �� �ִ�.

class Child : public Parent {
private:
	int age = 0;
	char nickname[11] = "����";
public:
//	�ڽ� Ŭ������ �����ڰ� ����Ǳ� ���� ������ ������ ������ �θ� Ŭ������ �����ڰ� �ڵ����� ���� ����ȴ�.
//	�ڽ� Ŭ������ ")" �ڿ� ":"�� ��� �θ� Ŭ������ �����ڸ� ������ �� �ִ�. => ������ �����Ϸ��� �θ� Ŭ���� �⺻ �����ڸ� �ڵ����� �־��ش�.
	Child() /*: Parent()*/ {
		cout << "�ڽ� Ŭ������ �⺻ �����ڰ� ����˴ϴ�." << endl;
	}

//	�ڽ� Ŭ������ �����ڴ� �θ� Ŭ������ ���� ��ӹ��� ��� ������ �ڱ� �ڽ��� ������ ��� ������ �ʱ�ȭ ���Ѿ� �Ѵ�.
//	�θ� Ŭ������ ���� ��ӹ��� private ������ ������ ��� ������ �θ� Ŭ������ �����ڸ� ȣ���ؼ� �ʱ�ȭ ��Ų��.
	Child(const char name[11], bool gender, int age, const char nickname[11]) : Parent(name, gender) {
//		�θ� Ŭ������ ���� ��ӹ��� ��� ������ ���� ������ private�� ��� �̸� ��ӹ��� �ڽ� Ŭ���������� ������ �Ұ����ϱ� ������ this��
//		����ؼ� �ʱ�ȭ�� �Ұ����ϴ�.
//		strcpy_s(this->name, name);		// ��ӹ��� ��� ���� name�� private �������� ��ӵǼ� ������ �߻��ȴ�.
//		this->gender = gender;			// ��ӹ��� ��� ���� gender�� private �������� ��ӵǼ� ������ �߻��ȴ�.
		this->age = age;
		strcpy_s(this->nickname, nickname);
	}

//	�θ� Ŭ�������� ��ӹ��� toString() �Լ��� �̸��� ������ ��µǹǷ� �ڽ� Ŭ������ ���̿� ������� ����Ϸ��� �θ� Ŭ������ ���� ��ӹ���
//	toString() �Լ��� �ٽ� ����� ����ϸ� �ȴ�. => �Լ��� ������(override)�� �Ѵ�.
//	�Լ��� �������ϸ� �θ� Ŭ������ ���� ��ӹ��� �Լ��� ���õǰ� �ڽ� Ŭ�������� �ۼ��� �Լ��� ����ȴ�.
	void toString() {
//		cout << getName() << "(" << (isGender() ? "��" : "��") << ") - " << age << ", " << nickname << endl;
//		�θ� Ŭ������ ���� ��ӹ��� �Լ��� �����Ϸ��� �θ� Ŭ���� �̸� �ڿ� "::"�� ��� �Լ��� �����ϸ� �ȴ�.
//		Parent::toString() => �θ�(Parent) Ŭ������ toString() �Լ��� �����Ѵ�.
		Parent::toString();
		cout << " - " << age << ", " << nickname << endl;
	}
};

void main() {

	Parent parent1;
	parent1.toString();
	Parent parent2("ȫ�浿", true);
	parent2.toString();
	cout << "===================================================" << endl;

	Child child1;
	child1.toString();
	cout << "===================================================" << endl;

	Child child2("������", false, 16, "�̻���");
	child2.toString();

}