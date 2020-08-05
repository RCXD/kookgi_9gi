#include "config.h"

class Point {
private:
	int x = 0, y = 0;
public:
	Point() { }
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	void toString() {
		cout << "x = " << x << ", y = " << y << endl;
	}

	/*
	void add(int value) {
		x += value;
		y += value;
	}
	*/

//	������ �����ε�(������ �ߺ� �Լ�)�� Ŭ���� ��� �Լ��� �� ��� ��1���۷���� �����ڸ� �����ε��ϴ� Ŭ���� �ڽ��� �ǰ� ��2���۷����
//	�μ��� �Ѱܹ޴´�.

	/*
	Point operator +(int value) {
		Point point;		// ���� ����� ������ ���Ͻ�ų ��ü�� �����Ѵ�.
		point.x = x + value;
		point.y = y + value;
		return point;		// ���� ����� �����Ѵ�.
	}
	*/
	/*
	Point operator +(Point p) {
		Point point;
		point.x = x + p.x;
		point.y = y + p.y;
		return point;
	}
	*/

	friend Point operator +(Point, int);
	friend Point operator +(Point, Point);
};

//	������ �����ε��� �ܺ� �Լ��� �� ��� ��1���۷���� ��2���۷��带 ��� �μ��� �Ѱܹ޾ƾ� �Ѵ�.
//	�ܺ� �Լ����� Ŭ������ private ��� ������ �����ؾ� �ϱ� ������ Point Ŭ������ friend�� �����ؾ� �Ѵ�.

Point operator +(Point p, int value) {
	Point point;
	point.x = p.x + value;
	point.y = p.y + value;
	return point;
}

Point operator +(Point p1, Point p2) {
	Point point;
	point.x = p1.x + p2.x;
	point.y = p1.y + p2.y;
	return point;
}

void main() {

	Point point1(10, 20);
	point1.toString();				// x = 10, y = 20
//	point1.add(10);
	point1 = point1 + 10;
	point1.toString();				// x = 20, y = 30

	Point point2(20, 10), point3;
	point2.toString();				// x = 20, y = 10
	point3 = point1 + point2;
	point3.toString();				// x = 40, y = 40

}