#include "config.h"

class Score {
private:
	int no;
	char name[11];
	int cpp, java, jsp, total;
	double average;
public:
	/*
	Score() {
		no = 0;
		strcpy_s(name, "����");
		cpp = 0;
		java = 0;
		jsp = 0;
		total = cpp + java + jsp;
		average = (double)total / 3;
	}

	Score(int no, const char name[11], int cpp, int java, int jsp) {
		this->no = no;
		strcpy_s(this->name, name);
		this->cpp = cpp;
		this->java = java;
		this->jsp = jsp;
		total = cpp + java + jsp;
		average =(double)total / 3;
	}
	*/

//	����Ʈ �μ��� ����ϸ� ���� �ּ����� ó���� ������ 2���� 1���� ����� ����� �� �ִ�.
//	����Ʈ �μ��� �κ������� ����� �� ����. => ������� �ʰų� ��� �μ��� ���ؼ� ����ؾ� �Ѵ�.
//	����Ʈ �μ��� �Լ��� ȣ��� �� ���μ��� �����Ͱ� �Ѿ���� �Ѿ�� �����͸� ������ �Լ��� �����ϰ� ���μ��� �����Ͱ� �Ѿ���� ������
//	"=" �ڿ� ������ �����͸� ������ �Լ��� �����Ѵ�. => "=" ���� �����͸� ����Ʈ �μ��� �θ���.
	Score(int no = 0, const char name[11] = "����", int cpp = 0, int java = 0, int jsp = 0) {
		this->no = no;
		strcpy_s(this->name, name);
		this->cpp = cpp;
		this->java = java;
		this->jsp = jsp;
		total = cpp + java + jsp;
		average = (double)total / 3;
	}


	void toString() {
		cout << name << "���� ��� ������ " << average << "�� �Դϴ�." << endl;
	}
};

void main() {

	Score score1;
	score1.toString();
	Score* score2 = new Score();
	score2->toString();

	Score score3(1, "ȫ�浿", 100, 100, 99);
	score3.toString();
	Score* score4 = new Score(2, "�Ӳ���", 54, 71, 68);
	score4->toString();

	delete score2;
	delete score4;

}