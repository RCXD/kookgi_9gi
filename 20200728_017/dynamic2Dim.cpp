#include "config.h"

void main() {

	int n, m;
	printf("�迭�� ũ�� : ");
	scanf_s("%d %d", &n, &m);

//	2���� �迭�� �������� �Ҵ��Ϸ��� ���� ���� �Ҵ��ϰ� ���� ������ŭ �ݺ��ϸ� �࿡ ���� �Ҵ��Ѵ�.

	/*
//	c���� 2���� �迭 �������� �Ҵ��ϱ�
	int** data = (int**)malloc(sizeof(int) * n);	// ��
	for (int i = 0; i < n; i++) {
		data[i] = (int*)malloc(sizeof(int) * m);	// ��
//		���� �Ҵ� ������� 2���� �迭�� ����� ��� �迭 ��Ҵ� ���� ����� �������� �ʱ�ȭ ��Ų��.
		memset(data[i], 0, _msize(data[i]));
	}
	*/

//	c++���� 2���� �迭 �������� �Ҵ��ϱ�
	int** data = new int*[n];
	for (int i = 0; i < n; i++) {
		data[i] = new int[m];
		memset(data[i], 0, _msize(data[i]));
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%d ", data[i][j]);
		}
		printf("\n");
	}
	printf("==================================\n");

//	���� �Ҵ�� �޸𸮴� ���� �Ǵ� �迭�� ����� {} ������ ����ų� ���α׷��� ����Ǹ� �޸𸮿��� �ڵ����� �Ҹ�ȴ�.
//	malloc() �Լ� �Ǵ� new�� ����ؼ� �������� �Ҵ�� �޸𸮴� ���α׷��� ����Ǵ��� �޸𸮿��� �ڵ����� �Ҹ���� �ʱ� ������ ���α׷��Ӱ�
//	���� �޸𸮿��� �Ҹ���Ѿ� �Ѵ�. => �ڹٴ� ������ �÷��Ͱ� �־ ���α׷��Ӱ� ���� �ʴ��� �ڵ����� �Ҹ��Ų��.
//	�������� �Ҵ�� �޸𸮰� �Ҹ���� �ʾ� �ٸ� ���α׷��� ������� ���ϴ� ������ �޸� ���� �����̶� �θ��� �޸� ���� ������ �����Ϸ���
//	���α׷��� ����Ǳ� ���� �������� �Ҵ�� �޸𸮸� �Ҹ���Ѿ� �Ѵ�.
//	c���� free() �Լ��� ����ؼ� �Ҹ��Ű�� c++�� delete ������ ����ؼ� �Ҹ��Ų��.
//	2���� �̻� �������� �Ҵ��� ��� �Ҵ��� ������ �������� �Ҹ���Ѿ� �Ѵ�. => 2������ ��� ���� ���� �Ҹ��Ų �� ���� �Ҹ��Ų��.

	/*
	for (int i = 0; i < n; i++) {
		free(data[i]);
	}
	free(data);
	*/

	for (int i = 0; i < n; i++) {
		delete[] data[i];			// �迭(�ڿ� []�� �ִ�)�� �Ҹ��ų �� delete �ڿ� []�� ���δ�.
	}
	delete data;					// ����(�ڿ� []�� ����)�� �Ҹ��ų �� delete �ڿ� []�� ������ �ʴ´�.
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%d ", data[i][j]);
		}
		printf("\n");
	}

}