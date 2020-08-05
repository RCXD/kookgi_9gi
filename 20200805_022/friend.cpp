#include "config.h"
#include "date_s.h"

//	private �������� ������ ��� ������ Ŭ���� �ܺο��� ������ �����ϵ��� ���� ������ �ִ� ������� getters & setters �Լ��� ����� ����ϴ�
//	����� friend�� �����ϴ� ����� �ִ�.
//	getters & setters �Լ��� Ư�� ����� �����ؼ� ���������� ���� ������ �ִ� ����̰� friend�� Ŭ������ ��� ��� ������ ���ؼ� �ϰ�������
//	���� ������ �ִ� ������� �ڽ� Ŭ������ ��ӵ��� �ʴ´�.
//	friend�� �����ϴ� ����� Ŭ���� ���ο� Ư���ϰ� ������ ��ġ�� ���� ������ ����� ���ؼ� ���� Ŭ������ �� ���̳� �ڿ� �����Ѵ�.
//	friend�� �����ϴ� ����� friend�� ������ �Լ��� ������ ���� �տ� friend�� �ٿ��ָ� �ȴ�.

class Time;			// Time Ŭ������ ���� ���� => �����Ϸ����� Time�� Ŭ�������� �˷��ش�.
class Date {

	friend void today(Date, Time);

private:
	int year = 0, month = 0, day = 0;
public:
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

	friend void today(Date, Time);

private:
	int hour = 0, minute = 0, second = 0;
public:
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

//	�ܺ� �Լ�
void today(Date date, Time time) {
	cout << "������ " << date.year << "�� " << date.month << "�� " << date.day << "�� " << time.hour << "�� " << time.minute << "�� "
		<< time.second << "�� �Դϴ�." << endl;
}

void main() {

	Date date;
	Time time;
	today(date, time);

}