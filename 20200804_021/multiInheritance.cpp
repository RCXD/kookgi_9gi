#include "config.h"
#include "date_s.h"

class Date {
private:
public:
	int year = 0, month = 0, day = 0;
	Date() {
		year = getYear();
		month = getMonth();
		day = getDate();
	}
	Date(int year, int month, int day) {
		this->year = year;
		this->month = month;
		this->day = day;
	}
	void toString() {
		cout << year << "�� " << month << "�� " << day << "��" << endl;
	}
};

class Time {
private:
public:
	int hour = 0, minute = 0, second = 0;
	Time() {
		hour = getHour();
		minute = getMinute();
		second = getSecond();
	}
	Time(int hour, int minute, int second) {
		this->hour = hour;
		this->minute = minute;
		this->second = second;
	}
	void toString() {
		cout << hour << ":" << minute << ":" << second << endl;
	}
};

//	���� ����̶� �� �� �̻��� �θ� Ŭ������ ���� ��ӹ޴� ���� ���Ѵ�.
//	Date Ŭ������ Time Ŭ������ ��ӹ޾� Now Ŭ������ �����.
class Now : public Date, public Time {
private:
public:
//	Date Ŭ������ Time Ŭ������ ���� ��� ��ӹ��� toString() �Լ��� override �ؼ� ����Ѵ�.
	void toString() {
		cout << "������ " << year << "�� " << month << "�� " << day << "�� " << hour << "�� " << minute << "�� "
			<< second << "�� �Դϴ�." << endl;
	}
};

void main() {

	Now now;
//	Now Ŭ������ Date Ŭ������ Time Ŭ������ ���� ��� toString() �Լ��� ��ӹ޾Ҵ�.
//	�Ʒ��� ���� toString() �Լ��� �����ϸ� � Ŭ������ ���� ��ӹ��� �Լ��� �����ؾ� �� �� ������ �� ���� ���°� �ǹǷ� �Լ��� ��ȣ�ϴٸ�
//	������ �߻���Ų��.
//	�̷��� �������� �ذ��ϴ� ����� ���� ����� ���� �ڽ� Ŭ�������� 2�� �̻��� Ŭ�������� ��ӹ��� �Լ��� override �ϸ� �ذ�ȴ�.
	now.toString();
	
//	���� Ŭ������ ���� ���� �̸��� �Լ��� ��ӹ��� ��� �ڽ� Ŭ�������� � Ŭ�������� ��ӹ��� �Լ��� ������ ������ "�Ҽ�Ŭ����::"��
//	�ٿ��� � �θ� Ŭ������ �Լ������� ����� �ָ� �ȴ�.
	now.Date::toString();		// Date Ŭ�������� ��ӹ��� toString() �Լ��� �����Ѵ�.
	now.Time::toString();		// Time Ŭ�������� ��ӹ��� toString() �Լ��� �����Ѵ�.

}