#include "config.h"

class Member {
private:
	char name[11] = "����";
	char phone[14] = "����";
	int age = 0;
public:
	Member() { }
	Member(const char name[11], const char phone[14], int age) {
		strcpy_s(this->name, name);
		strcpy_s(this->phone, phone);
		this->age = age;
	}
	void toString() {
		cout << name << "�� - ��ȭ��ȣ : " << phone << ", ���� : " << age << endl;
	}

	void setName(const char name[11]) {
		strcpy_s(this->name, name);
	}

//	���� �����ڴ� ���� Ŭ���� Ÿ���� ��ü�� ������ �ּҸ� ������ ���� ���� 1���� �μ��� ������ �����ڸ� ���Ѵ�.
	Member(Member &member) {	// ���� ������ override
		cout << "���� �����ڰ� ����˴ϴ�." << endl;
		strcpy_s(name, member.name);
		strcpy_s(phone, member.phone);
		age = member.age;
	}
};

void main() {

	Member member1;
	cout << "member1 : "; member1.toString();
	Member* member2 = new Member();
	cout << "member2 : "; member2->toString();
	cout << "====================================================" << endl;

	Member member3("ȫ�浿", "111-1111", 20);
	cout << "member3 : "; member3.toString();
	Member* member4 = new Member("�Ӳ���", "222-2222", 35);
	cout << "member4 : "; member4->toString();
	cout << "====================================================" << endl;

//	�⺻ ���� �����ڸ� �̿��ؼ� member3�� �����ؼ� Member Ŭ���� ��ü�� �����.
	Member member5 = member3;
	cout << "member5 : "; member5.toString();
	Member member6(member3);
	cout << "member6 : "; member6.toString();
	Member* member7 = new Member(member3);
	cout << "member7 : "; member7->toString();
	cout << "====================================================" << endl;

//	���� �����ڸ� �̿��� �纻(member4, member5, member6) ��ü�� ������ ����(member3) ��ü�� ������ �����ϴ��� �纻�� ��ȭ�� ����.
	member3.setName("����");
	cout << "member3 : "; member3.toString();
	cout << "member5 : "; member5.toString();
	cout << "member6 : "; member6.toString();
	cout << "member7 : "; member7->toString();
	cout << "====================================================" << endl;

//	�⺻ ���� �����ڸ� �̿��ؼ� member4�� �����ؼ� Member Ŭ���� ��ü�� �����.
//	member4�� ������ �����̹Ƿ� ������ ������ ����� �ּҰ� �����ϴ� �����͸� ���� �������� �μ��� �Ѱ���� �Ѵ�.
	Member member8 = *member4;
	cout << "member8 : "; member8.toString();
	Member member9(*member4);
	cout << "member9 : "; member9.toString();
	Member* member10 = new Member(*member4);
	cout << "member10 : "; member10->toString();
	cout << "====================================================" << endl;

//	���� �����ڸ� �̿��� �纻(member8, member9, member10) ��ü�� ������ ����(member4) ��ü�� ������ �����ϴ��� �纻�� ��ȭ�� ����.
	member4->setName("������");
	cout << "member4 : "; member4->toString();
	cout << "member8 : "; member8.toString();
	cout << "member9 : "; member9.toString();
	cout << "member10 : "; member10->toString();
	cout << "====================================================" << endl;

	delete member2;
	delete member4;
	delete member7;
	delete member10;

}