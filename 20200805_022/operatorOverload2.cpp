#include "config.h"

class Matrix {
private:
	int matrix[4] = { 0 };
public:
	Matrix() { }
	Matrix(int a, int b, int c, int d) {
		matrix[0] = a;
		matrix[1] = b;
		matrix[2] = c;
		matrix[3] = d;
	}
	void toString() {
		for (int i = 0; i < 4; i++) {
			if (i > 0) {
				cout << ", ";
			}
			cout << matrix[i];
		}
	}

	/*
	Matrix operator +(Matrix m) {
		Matrix matrix;
		for (int i = 0; i < 4; i++) {
			matrix.matrix[i] = this->matrix[i] + m.matrix[i];
		}
		return matrix;
	}
	*/
	/*
	void operator +=(Matrix m) {
		for (int i = 0; i < 4; i++) {
//			���� ��� ��1���۷��忡 ����� ����Ǿ�� �ϹǷ� ���� Ŭ���� ��� ������ ���� �����Ű�� �ȴ�.
			matrix[i] += m.matrix[i];
		}
	}
	*/
	/*
	bool operator ==(Matrix m) {
		int count = 0;
		for (int i = 0; i < 4; i++) {
			if (matrix[i] == m.matrix[i]) {
				count++;
			}
		}
		return count == 4 ? true : false;
	}
	*/

	friend Matrix operator +(Matrix, Matrix);
	friend void operator +=(Matrix&, Matrix);
	friend bool operator ==(Matrix, Matrix);
};

Matrix operator +(Matrix m1, Matrix m2) {
	Matrix matrix;
	for (int i = 0; i < 4; i++) {
		matrix.matrix[i] = m1.matrix[i] + m2.matrix[i];
	}
	return matrix;
}

//	�Լ� ���� ��� ��1���۷����� ���� �ٷ� ����Ǿ� �ϹǷ� Matrix m1���� ���� �ƴ� �ּҰ� ���޵Ǿ� �Ѵ�.
void operator +=(Matrix& m1, Matrix m2) {
	for (int i = 0; i < 4; i++) {
		m1.matrix[i] += m2.matrix[i];
	}
}

bool operator ==(Matrix m1, Matrix m2) {
	for (int i = 0; i < 4; i++) {
		if (m1.matrix[i] != m2.matrix[i]) {
			return false;
		}
	}
	return true;
}

void main() {

	Matrix matrix1(1, 2, 3, 4);
	cout << "matrix1 : "; matrix1.toString(); cout << endl;		// matrix1 : 1, 2, 3, 4
	Matrix matrix2(4, 3, 2, 1);
	cout << "matrix2 : "; matrix2.toString(); cout << endl;		// matrix2 : 4, 3, 2, 1
	Matrix matrix3;
	cout << "matrix3 : "; matrix3.toString(); cout << endl;		// matrix3 : 0, 0, 0, 0

	matrix3 = matrix1 + matrix2;
	cout << "matrix3 : "; matrix3.toString(); cout << endl;		// matrix3 : 5, 5, 5, 5
	matrix1 += matrix2;
	cout << "matrix1 : "; matrix1.toString(); cout << endl;		// matrix1 : 5, 5, 5, 5

	cout << (matrix1 == matrix3 ? "����" : "�ٸ���") << endl;

}