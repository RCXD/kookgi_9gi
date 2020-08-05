#include <time.h>

tm getCurrentTime() {
	time_t timer = (unsigned)time(NULL);
//	tm* t = localtime(&timer);
	tm t;
	localtime_s(&t, &timer);
	return t;
}

int getYear() { // ��
	return getCurrentTime().tm_year + 1900;
}

int getMonth() { // ��
	return getCurrentTime().tm_mon + 1;
}

int getDate() { // ��
	return getCurrentTime().tm_mday;
}

int getHour() { // �ð�
	return getCurrentTime().tm_hour;
}

int getMinute() { // ��
	return getCurrentTime().tm_min;
}

int getSecond() { // ��
	return getCurrentTime().tm_sec;
}

int getDay() {  // ���� => ����
	return getCurrentTime().tm_wday;
}

//	������ ���ڿ��� �����ϴ� �Լ�
const char* getWeekDay() {
	const char* week[] = { "��", "��", "ȭ", "��", "��", "��", "��" };
	return week[getDay()];
}