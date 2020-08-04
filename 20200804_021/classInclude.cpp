#include "config.h"
#include "date_s.h"

//	�⺻ �����ڷ� ��ü�� �����ϸ� ��ǻ�� �ý����� ��¥�� �ʱ�ȭ��Ű�� ��, ��, ���� �Ѱܹ޴� �����ڷ� ��ü�� �����ϸ� �Ѱܹ��� �μ���
//	�ʱ�ȭ��Ű�� Ŭ����
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

//	�⺻ �����ڷ� ��ü�� �����ϸ� ��ǻ�� �ý����� �ð����� �ʱ�ȭ��Ű�� ��, ��, �ʸ� �Ѱܹ޴� �����ڷ� ��ü�� �����ϸ� �Ѱܹ��� �μ���
//	�ʱ�ȭ��Ű�� Ŭ����
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

//	Ŭ���� ���� ����� �̿��� now Ŭ������ �����.
//	Ŭ���� �����̶� Ŭ������ ����� �ٸ� Ŭ������ ��ü�� ���� �� �ִٴ� �ǹ��̴�.
class Now {
private:
	Date date;			// Ŭ���� ����
	Time time;			// Ŭ���� ����
public:
	Now() { }
	Now(Date date, Time time) {
		this->date = date;
		this->time = time;
	}
	Now(int year, int month, int day, int hour, int minute, int second) {
		Date date(year, month, day);
		this->date = date;
		Time time(hour, minute, second);
		this->time = time;
	}
	void toString() {
		cout << "������ " << date.year << "�� " << date.month << "�� " << date.day << "�� " << time.hour << "�� " << time.minute << "�� "
			<< time.second << "�� �Դϴ�." << endl;
	}
};

void main() {

	Date date1;
	date1.toString();
	Date date2(2020, 12, 10);
	date2.toString();

	Time time1;
	time1.toString();
	Time time2(17, 50, 1);
	time2.toString();

	Now now1;
	now1.toString();
	Now now2(date2, time2);
	now2.toString();
	Now now3(2020, 12, 10, 17, 50, 1);
	now3.toString();

}